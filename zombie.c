#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(pid<0)
	{
		perror("Error:");
		exit(1);
	}
	else if(pid >0)
	{
		sleep(60);
		printf("Hello from parent process\n");
	}
	else
	{
		printf("Hello from child process\n");
		exit(0);
	}
	return 0;
}
