#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

void fun();

int main()
{
	atexit(fun);//used to terminate the process/function
	printf("Starting of main program\n");
	printf("Exiting of main program\n");
	return 0;
}

void fun()
{
	printf("Hello,Welcome to Linux programming\n");
}
