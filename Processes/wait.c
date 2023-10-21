#include<stdio.h>
#include<unistd.h>

void main()
{
	int id = fork();
	int n;
	if(id == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
	}
	
	if(id)
	{
		wait();
	}
	
	for(int i = n; i < n + 5; i++){
		printf("%d ",i);
		fflush(stdout);
	}
	
	if(id){
		printf("\n");
	}
}
