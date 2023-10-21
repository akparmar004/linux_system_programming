#include"header.h"
void main()
{
	printf("Hello Arjun..\n");
	kill(getpid(),SIGFPE);
	while(1);
}
