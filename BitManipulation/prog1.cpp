#include<iostream>
#include<cstdlib>
#include<bitset>

using namespace std;

int main(int argc, char** argv)
{
    int n= 4;
    int m = 8;
    int result;

    /*while (m!=0)
    {
        if((m & 1) != 0)
        {
            result = result+n;
            
        }
        n<<1;
        m>>1;
    }*/
    std::bitset<8> s2 = std::bitset<8>(m);
    int i = 0;
    while(s2[i]!='\0')
    {
        if((s2[i] & 1) != 0)
        {
            result = result+n;
        }
        n<<1;
        i++;
    }
    std::bitset<8> s1 = std::bitset<8>(n);
    int a = s1 & 1;
    s1 >> 1;
    s1 = s1 & 1;
    //n >> 1;
    //a = n & 1;
    cout<< s1 <<"\n";
    return 0;
}
