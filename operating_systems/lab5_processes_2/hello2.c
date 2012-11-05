#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *PrintHello(void *arg);
void *PrintOwnNumber(void *arg);

int main(int argc, char *argv[]){
  int pthread_array[10], i, rc; 
  pthread_t thread[10], th;
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

  /*
  for (i=0; i<10; i++){
    pthread_array[i] = pthread_create(&thread[i], NULL, PrintOwnNumber,(void *) i);
    if (pthread_array[i]){
      printf("Return code: %d\n", pthread_array[i]);
      exit(-1);
    }
  }

  for (i=0; i<10; i++){
    pthread_array[i] = pthread_join(thread[i], NULL);
    if (pthread_array[i]) {
      printf("ERROR; return code from pthread_join() is %d\n", pthread_array[i]);
      exit(-1);
    }
  }
  */

  rc = pthread_create(&th, NULL, PrintHello, NULL);
  if (rc){
    printf("Return code: %d\n",rc); 
    exit(-1);
  }
  rc = pthread_join(th, NULL);
  if (rc) {
    printf("ERROR; return code from pthread_join() is %d\n", rc);
    exit(-1);
  }


  printf("End of the main thread!\n");
  return 0;
}

void *PrintHello(void *arg){
  sleep(1);
  printf("Next boring 'Hello World!' version!\n");
  return NULL;
}

void *PrintOwnNumber(void *arg){
  sleep(1);
  int id = arg;
  printf("My number is %d!\n", id);
  return NULL;
}
