#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    pid_t pid;
    pid = fork();

    if (pid == -1)
    {
        perror("Fork Failed");
        exit(EXIT_FAILURE);
    }
    else if(pid == 0)
    {
        char buffer[20];
        snprintf(buffer, sizeof(buffer), "pmap %d",getpid());
        printf("Child Process\n");
        system(buffer);
        printf("Printf Virtual Address: %p\n",printf);
        printf("Read Virtual Address: %p\n",read);
        exit(EXIT_SUCCESS);
    }
    else
    {
        int status;
        (void)waitpid(pid,&status,0);
        printf("Parent Process\n");
        printf("Printf Virtual Address: %p\n",&printf);
        printf("Read Virtual Address: %p\n",&read);

    }
    
    return EXIT_SUCCESS;
}
