#include"header.h"

void main()
{
	int r;
	printf("Hello pid = %d\n",getpid());
	r = fork();
	printf("r = %d pid = %d\n",r,getpid());
	while(1);
}
