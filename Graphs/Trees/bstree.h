#ifndef BSTREE_H_
#define BSTREE_H_
#include "btree.h"
#include <iostream>
#include <vector>
class bstree:public btree{
  protected:
    //void balanceTree(node* pnode);
  public:
    bstree():btree(){
    }
    ~bstree();
    void balanceTree(std::vector<int> *list, bstree *bs);    
};

#endif
