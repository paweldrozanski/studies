#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM 4
#define LENGTH 100
// ----------------------------------------------------------

typedef struct {
     long* a;
     long sum; 
     int veclen; 
} CommonData;
// ----------------------------------------------------------

CommonData data; 
pthread_t threads[NUM];
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;



void* calc(void* arg); // Funkcja rozpoczecia
// ----------------------------------------------------------

int main (int argc, char *argv[]){

     long i, sum = 0;
     void* status;
     long* a = (long*) malloc (NUM*LENGTH*sizeof(long));     
     pthread_attr_t attr;

     int pthread_array[NUM];
     
     //Prepare data structure
     for (i=0; i<LENGTH*NUM; i++) {
          a[i] = i;
          sum += i;
     }

     data.veclen = LENGTH; 
     data.a = a; 
     data.sum = 0;

     //mutex initialization
     pthread_mutex_init(&mutex, NULL);
         
     //[1] setting thread attribute
     pthread_attr_init(&attr);
     pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

     for(i=0;i<NUM;i++){
          // tworzenie watkow
          pthread_array[i] = pthread_create(&threads[i], NULL, calc, (void *) i);
          if (pthread_array[i]){
            printf("Return code: %d\n", pthread_array[i]);
            exit(-1);
          }
     }

     //[1] destroy - not needed anymore
     pthread_attr_destroy(&attr);

     //join
     for(i=0;i<NUM;i++) {
          pthread_join(threads[i], &status);
     }

     //Print
     printf ("Correct result is: %ld \n", sum);
     printf ("Function result is: %ld \n", data.sum);

     //Clean
     free (a);
     pthread_mutex_destroy(&mutex);
     return 0;
}
// ----------------------------------------------------------

void* calc(void* arg)
{
  int segment = arg, start = segment*LENGTH, end = (segment+1)*LENGTH;
  printf("start: %d, stop: %d.\n", start, end-1);
  long* x = data.a;
  long mysum = 0;
  int i;

  for (i=start;i<end;i++){
    mysum += x[i];
  }

  pthread_mutex_lock ( &mutex );
  data.sum += mysum;
  pthread_mutex_unlock ( &mutex );

  pthread_exit((void*) 0);
}
// ----------------------------------------------------------
