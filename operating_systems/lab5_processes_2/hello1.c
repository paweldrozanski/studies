#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *PrintHello(void *arg);
void *PrintOwnNumber(void *arg);

int main(int argc, char *argv[]){

  int rc, i;
  pthread_t thread[10];

  for (i=0; i<10; i++){
    rc = pthread_create(&thread[i], NULL, PrintOwnNumber,(void *) i);
    if (rc){
      printf("Return code: %d\n", rc);
      exit(-1);
    }
  }
  sleep(1);
  return 0;
}

void *PrintHello(void *arg){
  printf("Next boring 'Hello World!' version!\n");
  return NULL;
}
void *PrintOwnNumber(void *arg){

  int id = (int)arg;
  printf("My number is %d!\n", id);
  return NULL;

}
