#include"header.h"

void abc(void)
{
	printf("hi..\n");
}
void bcd()
{
	printf("hello\n");
}
int main()
{
	//at exit allocates dynamic function pointer array 
	//and it will store all registered function
	//and call it in reverse order at the exit of this program 
	atexit(abc);//regestering
	printf("how are you..\n");
	atexit(bcd);//regestering
	sleep(4);
	return 0;
	//exit(0);
}
