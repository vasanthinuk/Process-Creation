#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	fork();
	printf("Fork() system call\n");
	printf("The process id for parent is:%d\n",getppid());
	printf("The process id for child is:%d\n",getpid());
	return 0;
}
