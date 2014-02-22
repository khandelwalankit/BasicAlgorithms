#include<iostream>
#include<cstdlib>

using namespace std;

//Print Fibonacci sequence and the sum 
int fibonacci(int num)
{
    if(num==1)
    {
        return 0;
    }
    else if(num==2)
    {
        return 1;
    }
    else
    {
        return(fibonacci(num-1) + fibonacci(num-2));
    }
}

int main(int argc, char** argv)
{
    int a = fibonacci (atoi(argv[1]));
    std::cout<< "Value is: "<<a<<endl;
    for(int i =1;i<=(atoi(argv[1]));i++)
    {
        cout<<fibonacci(i)<<endl;
    }
    return 0;
}


