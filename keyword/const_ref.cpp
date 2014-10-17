#include<iostream>
#include<cstdlib>
#include<string>
#include<exception>

using namespace std;

void bad_func(string& s1){
  cout<<s1<<endl;
}

void good_func(const string& s1){
  cout<<s1<<endl;
}

int main(){
  string s1("hello world");
  bad_func(s1);
  good_func(string("test const"));
  return 1;
}
