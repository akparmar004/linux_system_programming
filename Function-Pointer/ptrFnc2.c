#include<stdio.h>

int sum(int,int);
int mul(int,int);

typedef int* (*FPTR)(char *);
int* abc(char *);

void main()
{
	char s[5]="ARJUN";
	int * ans;
	FPTR p;
	p=abc();
	ans=(*p)(s);
	printf("%d\n",*ans);	
}

FPTR abc(void)
{
	return present;
}

int* present(char *p)
{
	while(*p != '\0')
	{
		if(*p == 'J')
		{
			return p;
		}
	}
}





