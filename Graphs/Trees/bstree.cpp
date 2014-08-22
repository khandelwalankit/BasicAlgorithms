#include "bstree.h"
#include<iostream>
#include<vector>

bstree::~bstree(){
}

void bstree::balanceTree(std::vector<int> *list,bstree *bs){
  if(list->size()==0)
    return;
  int mid_val;
  if(list->size()%2==0)
    mid_val = list->size()/2 ;
  else
    mid_val = list->size()/2 + 1;
  bs->insertNode(list->at(mid_val-1));
  if(mid_val!=1){
    std::vector<int> *v1 = new std::vector<int>(list->begin(),list->begin()+mid_val-1);
    std::vector<int> *v2 = new std::vector<int>(list->begin()+mid_val,list->end());
    balanceTree(v1,bs);
    balanceTree(v2,bs);
    delete v1;
    delete v2;
  }
  else{
    std::vector<int> *v2 = new std::vector<int>(list->begin()+mid_val,list->end());
    balanceTree(v2,bs);
    delete v2;
  }
}

