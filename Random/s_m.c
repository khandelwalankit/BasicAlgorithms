#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/mman.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

char *buffer;

static void
handler(int sig, siginfo_t *si, void *unused)
{
    printf("Got SIGSEGV at address: 0x%lx\n",
            (long) si->si_addr);
    exit(EXIT_FAILURE);
}

int
main(int argc, char *argv[])
{
    char *p;
    int pagesize;
    struct sigaction sa;
    int multiple = 1;
    int m_read_prt = 4;
   sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sa.sa_sigaction = handler;
    if (sigaction(SIGSEGV, &sa, NULL) == -1)
        handle_error("sigaction");

   pagesize = sysconf(_SC_PAGE_SIZE);
    if (pagesize == -1)
        handle_error("sysconf");

   /* Allocate a buffer aligned on a page boundary;
       initial protection is PROT_READ | PROT_WRITE */

    printf("The start address at %p\n",sbrk(0));
    buffer = sbrk(1);
    if (buffer == NULL)
        handle_error("memalign");

   printf("Start of region:        0x%lx\n", (long) buffer);

   for (p = buffer ; ; )
        *(p++) = 'a';

   printf("Loop completed\n");     /* Should never happen */
    exit(EXIT_SUCCESS);
}
