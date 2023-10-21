#include<stdio.h>

//making FPTR as a data type for function pointer
typedef int (*FPTR)(int,int);//with typedef it's a function pointer data type, without TD it's a function pointer only

typedef int fun(int,int);
fun sum,mul;

//int sum(int,int);
//int mul(int,int);

void main()
{
	int i=10,j=20,k;
	FPTR p;//p is a function pointer 
	k=sum(i,j);
	printf("%d\n",k);
	
	p=sum;
	k=(*p)(i,j);
	printf("%d\n",k);
	
	p=mul;
	k=(*p)(i,j);
	printf("%d\n",k);
	
}

int sum(int i,int j)
{
	return i+j;
}
int mul(int i,int j)
{
	return i*j;
}
