#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>

using namespace std;

int main(){
  std::string s("Ankit");
  int length = s.length();
  char *rev_s = new char[5];
  int upper_bound = std::ceil(length/2);
  int last = length-1;
  for(int i= 0; i<=upper_bound; i++){
    char c = s.at(i);
    rev_s[i] = s.at(last);
    rev_s[last] = s.at(i);
    last--; 
  }
  cout<<rev_s<<endl;
}
