#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	int a = 10;
	if(pid < 0)
	{
		printf("Error occured :\n");
	}
	else if(pid == 0)
	{	
		a = 11;
		printf("Child process created\n");
		printf("Child process id:%d\n",getpid());
		printf("The value of a:%d\n",a);
	}
	else if(pid > 0)
	{
		//a = 20;
		printf("Parent process is created\n");
		printf("Parent process id is:%d\n",getpid());
		printf("value of a is:%d\n",a);
	}
	return 0;
}

