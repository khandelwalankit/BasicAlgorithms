#include<iostream>
#include<cstdlib>
using namespace std;
class destructor_test{
  public:
    destructor_test() {
      cout<<"In Constructor"<<endl;  
    }
    ~destructor_test(){
      cout<<"In destructor"<<endl;
    }
};

int main(){
  cout<<sizeof(void)<<endl;
  destructor_test *dt = new destructor_test[3];
  delete [] dt;
  return 1;
}
