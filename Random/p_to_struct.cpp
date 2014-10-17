#include <iostream>
#include <cstdlib>
#include<stdio.h>
using namespace std;
typedef struct futent
{
    int *n;
}future;

void dummy (int* a)
{
    int *b;
    int k = 10;
    b = &k;
    *a = *b;
    printf("value of a is %d\n",*a);
}

int main(int argc,char *argv[])
{
    future *fut = (future*)malloc(sizeof(future));
    int a;
    dummy(&a);
    fut->n = &a;
    cout<<"The value of future is"<<*fut->n<<"\n";
}


