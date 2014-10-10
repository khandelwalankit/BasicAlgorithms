#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int minVal(std::vector<int>vect) {
  int min = vect.at(0);
  for(int i=1;i<vect.size();i++){
    if(min > vect.at(i))
      min = vect.at(i);
  }
  return min;
}

int findminVal(std::vector<int> vect){
  int mid = vect.size()/2;
  if(mid > 1000){
    int val1 = findminVal(std::vector<int>(vect.begin(),vect.begin()+mid));
    int val2 = findminVal(std::vector<int>(vect.begin()+mid,vect.end()));
    return ( val1 < val2 ? val1 :val2);
  }
  else
    return (minVal(vect));
}

int main(){
  std::vector<int> random_values;
  random_values.reserve(10);
  //std::cout<<"Generated Values"<<std::endl;
  for(int i=0;i<10000000;i++){
    random_values.push_back((rand()));
    //std::cout<<random_values.at(i)<<std::endl;
  }
  std::cout<<"Result"<<std::endl;
  int minVal = -1;
  if(random_values.size() > 0)
    minVal = findminVal(random_values);
  else
    std::cout<<"Size 0" <<std::endl;
  std::cout<<minVal<<std::endl;
  return 1;
}
