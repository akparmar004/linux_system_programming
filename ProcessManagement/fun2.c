#include"header.h"

void main()
{
	printf("Hello %d\n",getpid());
	fork();
	printf("Hey %d\n",getpid());
}
