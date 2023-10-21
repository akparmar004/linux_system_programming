#include"header.h"

void my_sir(int n)
{
	kill(getpid(),9);
}

void main()
{
	printf("Hello pid = %d\n",getpid());
	signal(SIGINT,my_sir);
	printf("Hai..\n");
	while(1);
}
