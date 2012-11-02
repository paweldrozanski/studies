#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM 4
#define LENGTH 100


typedef struct 
 {
   double      *a;
   double     sum; 
   int     veclen; 
 } CommonData;


   CommonData data; 
   pthread_t threads[NUM];
   pthread_mutex_t mutex;

void *calc(void *arg)
{
   long offset = (long)arg;
   int len = data.veclen;
   int start = offset*len;
   int end   = start + len;

   double *x = data.a;
   double mysum = 0;
   int i;
   for (i=start; i<end ; i++) 
    {
      mysum += (x[i] * x[i]);
    }
//lock critical part
   pthread_mutex_lock(&mutex);
//do Ur operations
   data.sum += mysum;
//unlock
   pthread_mutex_unlock(&mutex);

   pthread_exit((void*) 0);
}

/* MAIN ***************************************/
int main (int argc, char *argv[]){

long i;
void *status;
pthread_attr_t attr;
double * a = (double*) malloc (NUM*LENGTH*sizeof(double));
  
//Prepare data structure
for (i=0; i<LENGTH*NUM; i++) {
  a[i]=i;
  }

data.veclen = LENGTH; 
data.a = a; 
data.sum=0;

//mutex initialization
pthread_mutex_init(&mutex, NULL);
         
//[1] setting thread attribute
pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

for(i=0;i<NUM;i++){
   pthread_create(&threads[i], &attr, calc, (void *)i); 
}

//[1] destroy - not needed anymore
pthread_attr_destroy(&attr);

//join
for(i=0;i<NUM;i++) {
  pthread_join(threads[i], &status);
  }

//Print

printf ("Function result is: %f \n", data.sum);

//Clean
free (a);
pthread_mutex_destroy(&mutex);
pthread_exit(NULL);
}   