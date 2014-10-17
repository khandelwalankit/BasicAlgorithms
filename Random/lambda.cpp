#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm> //for_each

using namespace std;

int main(){
  vector<int> v;
  v.push_back( 1 );
  v.push_back( 2 );
  //...
  for_each( v.begin(), v.end(), [] (int val)
  {
      cout << val;
  } );
  return 1;
}
