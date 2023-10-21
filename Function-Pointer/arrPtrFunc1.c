#include<stdio.h>
typedef int fun(int,int);
typedef int (*fptr)(int,int);
fun sum,sub,mul,div;


void main()
{
	int i=10,j=20,k,m;
	fptr p[4]={sum,sub,mul,div};
	char s[10] = "+-*/";
	char op;
	
	//p is array of 4 pointers(pointer function)
	
	/*p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;*/
	
	//k=(*p[0])(i,j);
	//printf("%d\n",k);
	
	printf("Enter option +)sum, -)sub, *)mul, /)div : ");
	scanf("%c",&op);
	
	for(m=0;s[m];m++)
	{
		if(s[m] == op)
		{
			k=p[m](i,j);
			printf("ans : %d\n",k);
			return;
		}
	}
	printf("unknown option...");
	
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
