#include<stdio.h>

typedef int(*fptr)(char *);

int len(char *);

void main()
{
	char s[10];
	fptr p;
	int length;
	
	printf("Enter name : ");
	scanf("%s",s);
	
	p=len;
	length=(*p)(s);
	
	printf("%d",length);
}

int len(char *p)
{
	int count=0;
	while(*p != '\0')
	{
		p++;
		count++;
	}
	return count;
}
