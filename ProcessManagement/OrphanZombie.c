#include"header.h"
void main()
{
	printf("Hello pid = %d and ppid = %d\n",getpid(),getppid());
	
	if(fork == 0)
	{
		printf("In c pid = %d and ppid = %d\n",getpid(),getppid());
		sleep(10);
		printf("In c after sleep pid = %d and ppid = %d\n",getpid(),getppid());
		exit(1);
	}
	else
	{
		int r,s;
		printf("In p before wait\n");
		r = wait(&s);
		printf("In p after wait r = %d and s = %d\n",r,s);
		while(1);
	}
}
