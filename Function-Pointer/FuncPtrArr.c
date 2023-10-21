#include<stdio.h>
//#include<stdlib.h>

int sum(int a,int b)
{
	return a + b;
}
int mul(int a,int b)
{
	return a * b;
}
int div(int a,int b)
{
	return a / b;
}
int subt(int a,int b)
{
	return a - b;
}
void main()
{
	int a = 10,b = 20,i;
	
	int (*p[])(int,int) = {sum,mul,div,subt};
	
	printf("1 : sum\n2 : multiply\n3 : division\n4 : subtraction\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1 : printf("sum of %d and %d is : %d\n",a,b,(*p[0])(a,b));	
			break;
		case 2 : printf("multiplication of %d and %d is : %d\n",a,b,(*p[1])(a,b));	
			break;
		case 3 : printf("division of %d and %d is : %d\n",a,b,(*p[2])(a,b));	
			break;
		case 4 : printf("subtraction of %d and %d is : %d\n",a,b,(*p[3])(a,b));	
			break;
		default : printf("invalid option..\n");
	}
}
