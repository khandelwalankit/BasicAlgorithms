#include <iostream>
#include <cstdlib>

using namespace std;

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
int main(int argc, char** argv)
{
  int size = atoi(argv[1]);
  char *arr = new char[size]();
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

  reverse_string(arr, size);
  cout<<"Reverse String"<<endl;
  i=0;
  while(arr[i] != '\0')
  {
    cout<<arr[i++]<<endl;
  }
}

