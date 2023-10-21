#include<stdio.h>

int sum(int,int);
int mul(int,int);

typedef int(*FPTR)(int,int);//making FPTR function pointer data type


//FPTR return_fun_add(void);//function pointer return //as a address of other function

int(*return_fun_add(void))(int,int);//return_fun_add is a function to a pointer which takes nothing and returns two ints..

void main()
{
	int i=10,j=20,k;
	FPTR p;
	
	p=return_fun_add();
	k=(*p)(i,j);
	
	printf("%d\n",k);
	
}
FPTR return_fun_add(void)
//int(*return_fun_add(void))(int,int)
{
	return mul;
}

int sum(int i,int j)
{
	return i+j;
}
int mul(int i,int j)
{
	return i*j;
}
