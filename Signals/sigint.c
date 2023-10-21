#include"header.h"

void my_sir(int n)
{
	printf("In isr..n = %d\n",n);
}

void main()
{
	printf("Hello pid = %d\n",getpid());
	signal(SIGTSTP,my_sir);
	printf("Hai..\n");
	while(1);
}
