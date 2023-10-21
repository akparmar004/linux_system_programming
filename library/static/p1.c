#include<stdio.h>

int sum(int,int);
int mul(int,int);
void print(char*);

void main()
{
	int i=10,j=20,k,l;
	print("Hello world..\n");
	k=sum(i,j);
	printf("sum=%d\n",k);
	l=mul(i,j);
	printf("sum=%d\n",l);
}
