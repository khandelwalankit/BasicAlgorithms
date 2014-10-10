#include<iostream>
#include<cstdlib>

class binary_tree{
  int i;
  binary_tree left;
  binary_tree right;

  binary_tree(int _i, binary_tree _left, binary_tree _right) : i(_i),left(_left),right(_right) {}
  
  int calc_sum(){
    int ans = this.i;
    if(left!= NULL)
      ans = ans + left.calc_sum();
    if(right!=NULL)
      ans = ans + right.calc_sum();
    return ans;
  }
}

int main(){
}
