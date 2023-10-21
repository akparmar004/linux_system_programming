#include<stdio.h>

int callBackFunc(int,int,int(*)(int,int));

int sum(int,int);

void main()
{
	int i=10,j=20,r;
	r=callBackFunc(i,j,sum);
	printf("%d\n",r);
	
}

int callBackFunc(int i,int j,int(*p)(int,int))
{
	return (*p)(i,j);
}

int sum(int i,int j)
{
	return i+j;
}
