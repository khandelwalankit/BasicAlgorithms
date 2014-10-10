#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>


using namespace std;
/*Reverse String using size in argument*/
void reverse_string(char *arr, int size)
{
    int i=0;
    int temp = size-1;
    i=0;
    //cout<<arr[temp];
    while(i <= temp)
    {
        char tmp = arr[temp];
        arr[temp] = arr[i];
        arr[i] = tmp;
        temp--;
        i++;
    }
}

/*Reverse string without using size in argument*/
void reverse(char *str)
{
  char *strptr = str;
  int i=0,j=0;
  while(str[i])
    i++;
  i--;
  while(j<i)
  {  
    char tmp = str[i];
    str[i] = strptr[j];
    strptr[j] = tmp;
    i--;
    j++; 
  }
}

/*Check whether one string is permutation of another*/

bool check_permutation(char *str1, char *str2)
{
  std::vector<char> v_str1,v_str2;
  std::vector<char>::iterator it;
  int i=0;
  while(str1[i])
  {
    v_str1.push_back(str1[i]);
    i++;
  }
  i=0;
  while(str2[i])
  {
    v_str2.push_back(str2[i]);
    i++;
  }
  std::sort(v_str1.begin(),v_str1.end());
  std::sort(v_str2.begin(),v_str2.end());
  //it = std::search(v_str1.begin(),v_str1.end(),v_str2.begin(),v_str2.end());
  if(v_str1==v_str2)
    return true;
  return false;  
}

int main(int argc, char** argv)
{
  int size = atoi(argv[1]);
  char *arr = new char[size]();
  char *arr1 = "gcdabef";
  char *arr2 = "abcdefg";
  int i =0;
  while(i<size)
  {
    arr[i++] = (char)(((int)'0')+rand()%10);
  }
  //arr[i] = '\0';
  i=0;
  while(arr[i] != '\0')
  {
    cout<<arr[i++]<<endl;
  }
  if(check_permutation(arr1,arr2))
    cout<<"Is permutation\n";
  else
    cout<<"Is not permutation\n"; 
  reverse(arr);
  //reverse_string(arr, size);
  cout<<"Reverse String"<<endl;
  i=0;
  while(arr[i] != '\0')
  {
    cout<<arr[i++]<<endl;
  }
}

