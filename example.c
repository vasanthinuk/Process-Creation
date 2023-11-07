#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("I am in exec demo\n");
	printf("PID of exec_demo.c is:%d\n",getpid());
	char *args[]={"./hello",NULL};
	execv(args[0],args);
	printf("coming back to execv_demo.c");
	return 0;
}
