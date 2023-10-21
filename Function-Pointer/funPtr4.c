#include<stdio.h>

typedef void(*FPTR)(void);

void greet()
{
	printf("Hello guys..\n");
}

void main()
{
	FPTR p;
	p=greet;
	p();
}
