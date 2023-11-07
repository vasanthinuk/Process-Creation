#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	FILE *fptr;//file pointer
	fptr = fopen("abc.txt","w+");
	if(fptr == NULL)
	{
		perror("Error:");
		exit(1);
	}
	pid = fork();
	if(pid == -1)
	{
		printf("Fork failed");
		exit(1);
	}
	else if(pid == 0)
	{
		printf("Hello from child process\n");
		fclose(fptr);
		exit(1);
	}
	else
	{
		wait(NULL);//it will execute after the child process
		printf("Hello from parent process\n");
		//fprintf(fptr,"Hello from parent process\n");

		fclose(fptr);
		exit(1);
	}
	return 0;
}

