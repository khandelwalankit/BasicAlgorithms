
#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
  int *v1 = new int[10];
  int i=0;
  while(i<10){
    v1[i] = rand()%10;
    ++i;
  }
  for(i=1;i<10;i++){
    int j = i;
    while(j>0 && v1[j-1] > v1[j]){
      int tmp = v1[j-1];
      v1[j-1]=v1[j];
      v1[j]=tmp;
      j--;
    }
  }
  for(int i=0;i<10;i++)
    cout<<v1[i]<<endl;
}
