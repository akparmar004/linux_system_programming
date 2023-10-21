#include<stdio.h>
#include<unistd.h>

void main()
{
	printf("i am in execv.c\n");
	printf("pid of execv.c = %d\n",getpid());
	
	char *args[] = {"./hello",NULL};
	execv(args[0],args);
	printf("coming back to execv.c\n");
}
