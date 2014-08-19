#include"btree.h"
#include<iostream>
#include<stdlib.h>

int main(int argc, char**argv){
  btree bt;
  for(int i=0;i<10;i++){
    bt.insertNode(rand()%10);
  }
  bt.insertNode(5);
  node *searchedNode;
  searchedNode = bt.searchNode(5);
  if(searchedNode!=NULL)
    std::cout<<"Node found with value : " <<searchedNode->key_value<<std::endl;
  else
    std::cout<<"No Such node found" <<std::endl;
  return 0;
}
