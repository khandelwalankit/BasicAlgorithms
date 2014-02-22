#include<iostream>
#include<cstdlib>
#include<stdio.h>

void rev_string(char str)
{
    char tmp = &str[1];
    //char tmp = str[1];
    //printf("%c\n",str[2]);
    
}

int main()
{   
    char *abc = "ankit";
    rev_string(*abc);
    printf("%s\n",abc);
    return 0;
}
