#include<stdio.h>
typedef int fun(int,int);
typedef int (*fptr)(int,int);
fun sum,sub,mul,div;


void main()
{
	int i=10,j=20,k,op;
	fptr p[4]={sum,sub,mul,div};
	
	//p is array of 4 pointers(pointer function)
	
	/*p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;*/
	
	//k=(*p[0])(i,j);
	//printf("%d\n",k);
	
	printf("Enter option 1)sum, 2)sub, 3)mul, 4)div : ");
	scanf("%d",&op);
	
	if(op>=1 && op<=4)
	{
		k=(*p[op-1])(i,j);
		printf("%d\n",k);
	}
	else
	{
		printf("unknown option..\n");
	}
	
}

int sum(int i,int j)
{
	return i+j;
}
int sub(int i,int j)
{
	return i-j;
}
int mul(int i,int j)
{
	return i*j;
}
int div(int i,int j)
{
	return i/j;
}
