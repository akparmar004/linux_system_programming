#include"header.h"
void main()
{
	printf("Hello..\n");
	execl("/bin/ls","ls",NULL);
	printf("Hai..\n");
	
	//system("ls");
}
