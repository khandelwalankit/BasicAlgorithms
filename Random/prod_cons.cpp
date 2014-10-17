#include <iostream>
#include "semaphore.h"

using namespace std;
sem_t *empty, *full;


int main()
{
    empty = new sem_t(1);
    full = new sem_t(0);
    delete empty;
    delete full;
}
