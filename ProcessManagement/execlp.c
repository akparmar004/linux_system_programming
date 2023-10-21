#include"header.h"
void main()
{
	printf("Hello...\n");
	execlp("ls","ls",NULL);
	printf("hi..\n");
}
