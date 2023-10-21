//Dynamic runtime linking 
//in this dynamic libraries going to be load in ram only when dlopen will called..
//otherwise it will not load at ram..

#include<stdio.h>
#include<dlfcn.h>

extern int sum(int,int);
extern int mul(int,int);
extern void print(char *);

void main()
{
	int i=10,j=20,k,op;
	void *handler;
	int (*p)(int,int);
	printf("enter the op 1)sum 2)mul : ");
	scanf("%d",&op);
	
	if(op == 1)
	{
		//1)open library
		//2)get sum function add
		//3)call the function
		//4)close library
		handler = dlopen("./library.so",RTLD_LAZY);
		if(handler == 0)
		{
			printf("%s\n",dlerror());
			return;
		}
		
		p = dlsym(handler,"sum");
		if(p == 0)
		{
			printf("%s\n",dlerror());
			return;
		}
		k = (*p)(i,j);
		printf("k = %d\n",k);
		dlclose(handler);
	}
	else if(op == 2)
	{
		handler = dlopen("./library.so",RTLD_LAZY);
		if(handler == 0)
		{
			printf("%s\n",dlerror());
			return;
		}
		
		p = dlsym(handler,"mul");
		if(p == 0)
		{
			printf("%s\n",dlerror());
			return;
		}
		k = (*p)(i,j);
		printf("k = %d\n",k);
		dlclose(handler);
	}
	else
	{
		printf("invalid option..\n");
	}
	while(1);
}
