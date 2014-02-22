#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

std::string compressor(char *comp_str)
{
    int i=0;
    int count=0;
    std::string output;
    while(comp_str[i] != '\0')
    {
        if(comp_str[i] == comp_str[i+1])
        {
            count++;
        }
        else
        {
            count++;
            output+=comp_str[i];
            if (count > 1)
            {
                output+=std::to_string(count);
            }
            count = 0;
        }
        i++;
    }
    return(output);
    //cout<< output <<endl;
}

int main(int nargs, char** argv)
{
    char *str = "abcdd";
    std::string output{compressor(str)};
    cout << output <<endl;
    return 0;
}

