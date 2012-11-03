#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *PrintHello(void *arg);

int main(int argc, char *argv[]){
  pthread_t thread;
  int rc = pthread_create(&thread, NULL, PrintHello, NULL);
  if (rc){
    printf("Return code: %d\n", rc);
    exit(-1);
  }
  pthread_join(thread, NULL);
  printf("End of the main thread!\n");
  return 0;
}
void *PrintHello(void *arg){
  sleep(1);
  printf("Next boring 'Hello World!' version!\n");
  return NULL;
}
