#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc , char **argv)
{
    pid_t pid;
    int c = 5;
    pid = fork();
    if(pid)
    {
        c += 5;
        printf("Parent Pid is %d and C is %d\n", pid, c);

    }
    else
    {
        int status;
        (void)waitpid(pid,&status,0);
        c += 10;
        printf("Pid is %d and C is %d", pid, c);
        //printf("Parent Pid is %d", getppid);
    }
    return EXIT_SUCCESS;
}
