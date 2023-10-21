#include"header.h"

void main()
{
	printf("Hello pid = %d ppid = %d\n",getpid(),getppid());
	fork();	
	printf("Hai pid = %d ppid = %d\n",getpid(),getppid());
	while(1);
}
