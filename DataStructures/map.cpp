#include<iostream>
#include<cstdlib>
#include<map>

using namespace std;

int uniqueCount(char *str1,char *str2)
{
    int count = 0;
    int i=0;
    std::map<char, int> m_str1;
    std::map<char,int>::iterator ii;
    while (str1[i]!='\0')
    {
        ii = m_str1.find(str1[i]);
        if(ii->second >= 1)
        {
            m_str1.erase(ii);
            m_str1.insert(std::pair<char,int>(str1[i],(ii->second+1)));
        }
        else
        {
            m_str1.insert(std::pair<char,int>(str1[i],1));
        }
        i++;
    }
    
    std::map<char,int>::iterator si;
    i=0;
    while (str2[i]!='\0')
    {
        si = m_str1.find(str2[i]);
        if(si->second >=1)
            m_str1.erase(si);
        i++;
    }
    std::map<char,int>::iterator ci;
    for(ci=m_str1.begin();ci!=m_str1.end();ci++)
    {
        count +=ci->second;
        cout<< ci->first <<"\t" << ci->second<< endl;
    }
    return count;
}

int main(int argc, char **argv)
{
    char *string1 = "anchal";
    char *string2 = "kchs";
    int count = uniqueCount (string1, string2);
    cout << "The total count left is" <<count;
    return 0;
}
