#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <errno.h>
// ----------------------------------------------------------

#define NUM_THREADS 5
#define TARGET 100
// ----------------------------------------------------------

struct thread_params {
     int target;
     int thread_idx;
};
// ----------------------------------------------------------

struct thread_params tp[NUM_THREADS];
pthread_t threads[NUM_THREADS];
pthread_mutex_t mutex;
int tries;

void *search(void *arg);
void cleanup(void *args);
// ----------------------------------------------------------
     
int main (int argc, char *argv[]){
     int ti;
     int target=TARGET;

     tries = 0;
     pthread_mutex_init(&mutex, NULL); 

     printf("Searching for: %d\n", target);

     for (ti=0;ti<NUM_THREADS;ti++){
          tp[ti].target = target; //wartosc do odszukania
          tp[ti].thread_idx = ti; //index watku

          pthread_create(&threads[ti], NULL, search, &tp[ti]);

          printf("Target: %d, thread_idx: %d\n", target, ti);

     }

     for (ti=0;ti<NUM_THREADS;ti++){ 
          pthread_join(threads[ti], NULL);
     }

     printf("Number of all iterations: %d.\n", tries);
     pthread_mutex_destroy(&mutex);
     return 0;
}
// ----------------------------------------------------------

void *search(void *arg){

     struct thread_params *th_struct = (struct thread_params*) arg; //wskaznik na argument
     int threadIdx = th_struct->thread_idx; // indeks watku
     int toFind = th_struct->target;   // wartosc do odszukania

     int ti = 0,fnd=0; 
     int rnd;


     pthread_t tid = pthread_self();
     srand(tid);

     pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
     pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL);


     pthread_cleanup_push(cleanup, &tries);
     while(1){
          while(pthread_mutex_trylock(&mutex) == EBUSY){
               pthread_testcancel();
          }
          tries++;
          pthread_mutex_unlock(&mutex);

          rnd = (int)(rand()%1000);
          if (toFind == rnd) {
            fnd= tries;
               while(pthread_mutex_trylock(&mutex) == EBUSY){
                    pthread_testcancel();
               }
               printf("Number found by %d!\n", threadIdx);
               for(ti=0;ti<NUM_THREADS;ti++){
                    if(ti == threadIdx)      // kasowanie innych watkow - ten watek zakoczy sie normalnie
                         continue;
                    pthread_cancel(threads[ti]);
               }
               sleep(1);
               pthread_mutex_unlock(&mutex);
               break;
          }
     }
 
     pthread_cleanup_pop(1);
     return((void *)0);
}
// ----------------------------------------------------------
 
void cleanup(void *arg)
{
  int try = (int)arg;

  /* get the calling thread's ID */
  pthread_t tid = pthread_self();

  /* print where the thread was in its search when it was cancelled*/
  printf("The thread no %lu: number of iterations: %d\n",tid,*((int*)arg));

}
