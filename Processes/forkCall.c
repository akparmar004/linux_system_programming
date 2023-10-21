#include<stdio.h>
#include<unistd.h>

void main()
{
	//it will print 8 times hello world 
	//because fork will make a child process 
	//from the line of it's call in calling process	
	fork();
	fork();
	fork();
	printf("Hello World!!\n");
}
