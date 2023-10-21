#include<stdio.h>

typedef int(*p)(void);
int(*abc(int))(void);
int sum(void);

void main()
{
	int sum;
	p ptr;
	ptr = abc(10);
	sum=(*ptr)();
	
	printf("%d\n",sum);
}

p abc(int i)
{	
	return sum;
}

int sum(void)
{
	int i=10;
	return i;
}

