#include"header.h"
void main(int argc,char **argv)
{
	if(argc != 3)
	{
		printf("usage : ./my_kill signum pid\n");
		return;
	}	
	
	if(kill(atoi(argv[2])/*pid*/,atoi(argv[1])/*signal number*/) < 0)
	{
		perror("kill");
		return;
	}
}
