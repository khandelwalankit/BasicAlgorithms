#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   char buffer[20];
   snprintf(buffer, sizeof(buffer), "pmap %d",getpid());
   system(buffer);
   printf("Printf Virtual Address: %p\n",printf);
   printf("Read Virtual Address: %p\n",read);
   return EXIT_SUCCESS;
}
