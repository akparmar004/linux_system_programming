#include"header.h"

void main()
{
	pid_t retVal;

	retVal = fork();
	
	 if(retVal > 0){
        	int i = 0;
        	while(i++ < 5){
        	    printf("in the parent process.\n");
        	    sleep(1);
        	}
	        //kill the child process
        	kill(retVal, SIGKILL);
	 }
	 else if(retVal == 0)
	 {
	 	int i =0;
	 	while(i++ < 15){
        	    printf("in the child process.\n");
        	    sleep(1);
        	}
	 }	
	 else
	 {
	 	printf("something bad happened\n");
	 	exit(EXIT_FAILURE);
	 }
}
