#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = vfork();
	if(pid < 0)
	{
		printf("Error occured :\n");
	}
	else if(pid == 0)
	{
		printf("Child process created\n");
		printf("Child process id:%d\n",getpid());
	}
	else if(pid > 0)
	{
		printf("Parent process is created\n");
		printf("Parent process id is:%d\n",getpid());
	}
	return 0;
}

