#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(int argc, char** argv)
{
    int child =fork();
    int c = 5;
    int i =0;
    if (child ==0)
    {
        c+=5;
        printf("The Value Child 1 is %d",c);
    }
    else
    {
        int status;
        (void)waitpid(child,&status,0);
        child = fork();
        c+=10;
        if(child)
        {
            (void)waitpid(child,&status,0);
            c+=5;
            printf("The Value is %d",c);
        }
        printf("The Value is %d",c);
    }
    }
