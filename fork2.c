#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t p;
	p = fork();
	if(p == 0)
	{
		perror("Error:");
	}
	else if(p == 0)
	{
		pid_t q;
		q = fork();
		if( q < 0)
		{
			perror("Error:");
		}
		else if(q == 0)
		{
			printf("Child process created\n");
			printf("Child process id:%d\n",getpid());
		}
		else
		{
			printf("Parent process created\n");
			printf("The process id for parent is:%d\n",getpid());
		}
	}
	else
	{
		printf("Parent process id:%d\n",getpid());
		printf("child process id:%d\n",p);
	}
	printf("Welcome to operaring systems\n");
	return 0;
}

