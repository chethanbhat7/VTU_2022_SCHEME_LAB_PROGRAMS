#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t q;
printf("Hello! it is before fork");
printf("PID =%d\n",getpid());
q=fork();
if(q<0)
{
	printf("Error");
}
else if(q==0)
{
	printf("I am child having pid %d\n",getpid());
}
else
{
	wait(NULL);
	printf("I am parent\n");
	printf("My childs pid is %d\n",q);
}
printf("Good bye!\n");
return 0;
}

