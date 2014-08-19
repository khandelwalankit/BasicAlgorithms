#ifndef BTREE_H_
#define BTREE_H_

#include<iostream>
struct node{
  int key_value;
  node *left = NULL;
  node *right = NULL;
};

class btree{
  public:
    btree();
    ~btree();
    void insertNode(int);
    node* searchNode(int);
    void destroyTree();
    bool isEmpty();

  private:
    void insertNode(int,node*);
    node* searchNode(int, node*);
    void destroyTree(node*);
    node *root;
};

#endif
