#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(pid<0)
	{
		perror("Error:");
		exit(1);
	}
	else if(pid == 0)
	{
		printf("Child process created\n");
		sleep(2);
		printf("Hello world from child process\n");
	}
	else
	{
		printf("Parent process created\n");
		exit(1);
	}
	return 0;
}
