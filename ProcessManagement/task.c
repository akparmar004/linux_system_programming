#include"header.h"

void main()
{
	char s[100],*p;
	printf("enter many commands using , seprator : \n");
	scanf("%s",s);
	
	p = strtok(s, ",");
	
	while(p != NULL)
	{
		system(p);
		p = strtok(NULL,",");
	}
	
	
	
}
