#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <errno.h>

#define NUM_THREADS 5
#define TARGET 100
     
pthread_t threads[NUM_THREADS];
pthread_mutex_t lock;
int tries;

void *search(void *arg){

	int num = (int) arg;;
	int i=0;

	pthread_t tid;     
	tid = pthread_self();
	srand(tid);

	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL);
	
	while (1) {
		i++;
		int tmp=(int)(rand()%1000);
		if (num ==tmp ) {

			while (pthread_mutex_trylock(&lock) == EBUSY){
				pthread_testcancel();
			}
    
			tries = i;
     
			printf("Number found by  %d !\n",(int) tid);
     		
			int j;
	    		for (j=0;j<NUM_THREADS;j++){ 
	    			if (threads[j] != tid) pthread_cancel(threads[j]);
	    		}
	
	    		break;
    		}
    	}
    return((void *)0);
    }
     
int main (int argc, char *argv[]){
	int i;
	int target=TARGET;
     
	pthread_mutex_init(&lock, NULL); 

	printf("Searching for: %d\n", target);
     
	for (i=0;i<NUM_THREADS;i++){
	    	pthread_create(&threads[i], NULL, search, (void *)target);
	}

	for (i=0;i<NUM_THREADS;i++){ 
	    	pthread_join(threads[i], NULL);
	}

	printf("Iteration: %d .\n", tries);
    pthread_mutex_destroy(&mutex);
    pthread_exit((void *)0);
}