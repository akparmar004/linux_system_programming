#include"header.h"

void main()
{
	FILE *fp;
	//if we open file in read mode if file is not there 
	//fopen returns 0 else it will return structure pointer	 
	fp = fopen("data","r");
	
	if(fp == 0)
	{
		perror("fopen");
		//printf("file not present\n");
		return;
	}
	else
	{
		printf("file present\n");
	}
}
