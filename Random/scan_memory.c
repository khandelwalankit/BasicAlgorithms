#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   /*char tmp = 'a';
        char *a = &tmp;
    while(1)
    {
        (*a)++;
        printf("Address of A is : %p\n",*a);
    }*/
        while(1)
        {
            char safe = sbrk(1);

            if(safe == -1)
            {
                printf("Reached un safe\n");
                break;
            }
            else
            {
                printf("Safe address %p\n",safe);
            }
        }
    
    return EXIT_SUCCESS;
}
