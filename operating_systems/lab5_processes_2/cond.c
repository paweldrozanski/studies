#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
// ----------------------------------------------------------

#define MAXVAL 100
#define THREAD_NUM 10

int globalvariable = 0, i;
pthread_mutex_t mutex;
pthread_cond_t cond;

void* increment(void*);
void* printinfo(void*);
// ----------------------------------------------------------

int main(){
  int i;

     pthread_t t[THREAD_NUM];
     pthread_attr_t attr;

     // mutex initialization
     pthread_mutex_init(&mutex, NULL);

     // conditional initialization
     pthread_cond_init(&cond, NULL);

     pthread_attr_init(&attr);
     pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

     for (i=0; i<THREAD_NUM; i++){
       pthread_create(&t[i], &attr, increment, (void*)i); 
     }

     for (i=0; i<THREAD_NUM; i++){
       pthread_join(t[i], NULL);
       printf("t%d finished!\n", i);
     }

     printf("Finishing...\n");
     return 0;
}
// ----------------------------------------------------------

void* increment(void* arg) {
  for(;;){

    pthread_mutex_lock(&mutex);

    if (globalvariable == MAXVAL){
      pthread_cond_signal(&cond);
      pthread_mutex_unlock(&mutex);
      pthread_exit((void*) 0);
    }

    else{
    printf("Thread: %d globalvariable: %d\n", (int)arg, globalvariable);
    globalvariable++;
    pthread_mutex_unlock(&mutex);
    sleep(3);
    printf("\n");
    }
  }
}
// ----------------------------------------------------------

void* printinfo(void* arg) {
  pthread_mutex_lock(&mutex);

  while(globalvariable<MAXVAL){
    pthread_cond_wait(&cond, &mutex);
  }
  printf("Thread: %d MAXVAL: %d reached by globalvariable: %d\n", (int)arg, MAXVAL, globalvariable);
  pthread_mutex_unlock(&mutex);
  pthread_exit((void*) 0);

}
// ----------------------------------------------------------
