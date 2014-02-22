#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

/*template<vary>
void mergesort(vary *arr, vary left_index, vary right_index)
{
  
  
}*/

void printValue(int val)
{
  cout<< "The Value is :"<<val <<"\n";
}

int main(int argc, char** argv)
{
  vector<int> v;
  for(int i=0; i<11; i++)
  {
    v.push_back(rand()%11);
  }
 // for_each (v.begin(), v.end(), addValue);
  for_each (v.begin(), v.end(), printValue);

  int i=1;
  int num_blocks=(v.size()/2)+(v.size()%2);
  int num_elements=v.size()/(v.size()/2);
  cout<< "\nThe number of block is :"<<num_blocks <<"\n";
  //Arranging blocks for sorting
  while(num_blocks>0)
  {
    for(int j=0;j<v.size();j+=num_elements)
    {
        for(int k=j;k<(j+num_elements)&&k<v.size();k++)
        {
            cout<< "\t Val" << k <<":" << v[k];
        }
        cout<<"\n";
    }
    num_blocks=floor(num_blocks/2);
    if(num_blocks!=0)
        num_elements = v.size()/num_blocks; 
  }
  return 0;
}


