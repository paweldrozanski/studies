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
  for (i=0; i<10; i++){
    pthread_array[i] = pthread_create(&thread[i], NULL, PrintOwnNumber,(void *) i);
    if (pthread_array[i]){
      printf("Return code: %d\n", pthread_array[i]);
      exit(-1);
    }
    sleep(1);
  }

return 0;
}
