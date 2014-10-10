#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

std::vector<int> findMaxSubVector(std::vector<int> vect1){
	int globalMax=0;
	int globalLowIndex = -1;
 	int globalHighIndex = -1;
	int localMax=0;
  int localLastNeg = -1;
	for(int i=0;i<vect1.size();i++){
		if(vect1.at(i) >= 0){
      localMax += vect1.at(i);
      if(i == vect1.size()-1){
        if(localMax > globalMax){
          globalMax = localMax;
          globalLowIndex = localLastNeg+1;
          globalHighIndex = i;
        }
      }
    }
    else{
      if(localMax > globalMax){
        if(globalLowIndex == -1)
          globalLowIndex = (localLastNeg > -1) ? localLastNeg : 0 ;
        else
          globalLowIndex = localLastNeg+1;
        globalHighIndex = i - 1;
        globalMax = localMax;
      }
      localLastNeg = i;
      localMax = 0;
    }
  }
  if(globalLowIndex == -1 && localLastNeg == -1)
    return vect1;
  else if(localLastNeg >= 0 && globalLowIndex == -1){
    std::vector<int> ret_vect(1,-1);
    return ret_vect;
  }
  return std::vector<int>(vect1.begin()+globalLowIndex,vect1.begin()+globalHighIndex+1);
} 

int main(){
  std::vector<int> random_values;
  random_values.reserve(10);
  std::cout<<"Generated Values"<<std::endl;
  for(int i=0;i<10;i++){
    random_values.push_back((rand()%50) - 50);
    std::cout<<random_values.at(i)<<std::endl;
  }
  std::cout<<"Result"<<std::endl;
  std::vector<int> maxPositive = findMaxSubVector(random_values);
  for(int i=0; i<maxPositive.size() ; i++){
    std::cout<<maxPositive.at(i)<<std::endl;
  }
  return 1;
}
