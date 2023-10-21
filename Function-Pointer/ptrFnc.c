#include<stdio.h>
int sum(int,int);

int (*p)(int,int);

void main()
{
	int i=10,j=20,k;
	k=sum(i,j);
	printf("%d\n",k);
	p=sum;
	k=(*p)(i,j);
	printf("%d\n",k);
	
}

int sum(int i,int j)
{
	return i+j;
}
