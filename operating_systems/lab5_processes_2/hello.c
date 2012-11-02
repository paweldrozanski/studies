#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *PrintHello(void *arg){
   printf("Next boring 'Hello World!' version!\n");

   return NULL;
}

void *PrintOwnNumber(void *arg){
  
  int id = (int)arg;
  printf("My number is %d!\n", id);
  return NULL;
}

int main(int argc, char *argv[]){
  int pthread_array[10], i; 
  pthread_t thread[10];

  pthread_attr_t attr;

  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

  for (i=0; i<10; i++){
    pthread_array[i] = pthread_create(&thread[i], &attr, PrintOwnNumber,(void *) i);
    if (pthread_array[i]){
      printf("Return code: %d\n", pthread_array[i]);
      exit(-1);
    }

    /* Wait for the thread */
    pthread_array[i] = pthread_join(thread[i], NULL);
    if (pthread_array[i]) {
      printf("ERROR; return code from pthread_join() is %d\n", pthread_array[i]);
      exit(-1);
    }
  }

  pthread_attr_destroy(&attr);
  pthread_exit(NULL);

return 0;
}
