#include<iostream>
#include<cstdlib>
#include<vector>

int main(){
  std::vector<int> v1; 
  for(unsigned int i= 0; i<100 ;i++){
    if(i & 0x00000001)
      v1.push_back(i);
  }
}
