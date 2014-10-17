#include<iostream>
#include<cstdlib>

using namespace std;

void foo(int x){
  int a;
  void bar(int b){
    cout<<"Inside Bar:"<<b<<endl;
  }
  void baz(int b){
    b++;
    bar(b);
    cout<<"Inside Baz:"<<b<<endl;
  }
  a =x*x;
  baz(a);
}

int main(){
  foo(10);
}
