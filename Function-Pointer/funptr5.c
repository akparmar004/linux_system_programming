#include<stdio.h>
#include<time.h>

int sum(int a,int b)
{
	return a + b;
}

int prod(int a,int b)
{
	return a * b;
}

void funcPtr(int (*p)(int,int))
{
	srand(time(NULL));
	int a = rand() % 100;
	int b = rand() % 100;
	printf("The result of %d and %d is : %d\n",a,b,p(a,b));
	
}

void main()
{
	int i;
	printf("1 : sum\n2 : prod\n");
	scanf("%d",&i);
	if(i == 1)
		funcPtr(&sum);
	else
		funcPtr(&prod);
}
