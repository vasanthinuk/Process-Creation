#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	FILE *fptr;
	char buff[20];
	pid= fork();
	if(pid < 0)
	{
		printf("Child process not created\n");
	}
	else if(pid > 0)
	{
		fptr = fopen("a.txt","w");
	
		if(fptr < 0)
		{
			printf("File not created:");
		}
		fgets(buff,20,stdin);
		fwrite(fptr,"vasanthi",20);
		printf("The message is:%s\n",buff);
	}
	else
	{
		fptr = fopen("a.txt","r");
		fread(fptr,buff,20);
		printf("The message is:%s\n",buff);
		fclose(fptr);
	}
	return 0;
}

	
	

	
