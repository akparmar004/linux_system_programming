#include"header.h"

void main(int argc,char *argv[],char *env[])
{//env holds base address of array of pointers where each pointer points
//to one shell variable and last null pointer is present

for(int i = 0;env[i];i++)
{
	printf("%s\n",env[i]);
	sleep(1);
}
printf("-----------------------\n");
 
}
