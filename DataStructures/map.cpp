#include<iostream>
#include<cstdlib>
#include<map>
#include<set>
using namespace std;

bool uniqueString(char *str)
{
  std::set<char> u_str;
  std::set<char>::iterator ii;
  int i = 0;
  while(str[i]){
    ii = u_str.find(str[i]);
    if(u_str.count(str[i])>0)
      return false;
    else
      u_str.insert(str[i]);
    i++;
  } 
  return true;
}

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
    /*Determine string is unique or not*/
    if(uniqueString(string2))
      cout<< "The String is unique\n";
    else
      cout<< "The String is not unique\n";
      
    /* Following function call will return us total number of unique characters comparing first string with second */
    int count = uniqueCount (string1, string2);
    cout << "The total count left is\n" <<count;
    return 0;
}
