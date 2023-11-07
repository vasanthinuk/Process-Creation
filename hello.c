#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("I am in hello.c\n");
	printf("PID of hello is:%d\n",getpid());
	return 0;
}
