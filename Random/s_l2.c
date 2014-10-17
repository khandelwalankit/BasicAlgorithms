#include <stdio.h>
//#include <sys/types.h>
//#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   printf("Printf Virtual Address: %p\n",printf);
   printf("Read Virtual Address: %p\n",read);
   return EXIT_SUCCESS;
}
