#include<stdio.h>
#include<stdlib.h>


void foo(int x)
{
    int a;
    void bar(int b)
    {
        printf("%d",b);
    }
    void baz(int b)
    {
        {
            int a =2;
            bar(a);
        }
        bar(a);
        printf("%d",b+1);
    }
    a=x*x;
    baz(a);
}

int main(int argc, char **argv)
{
    foo(10);
    return 0;

}
