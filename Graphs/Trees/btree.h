#ifndef BTREE_H_
#define BTREE_H_

#include<iostream>
#include<vector>
#include<forward_list>

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
    void traversalInOrder(std::vector<int>*);
    void traversalPostOrder(std::vector<int>*);
    void traversalPreOrder(std::vector<int>*);
    void traversalBFS(std::forward_list<int>*);
    int heightTree();
  protected:
    void insertNode(int,node*);
    void insertLeftNode(int,node*);
    void insertRightNode(int,node*);
    node* searchNode(int, node*);
    void destroyTree(node*);
    void traversalInOrder(node*, std::vector<int>*);
    void traversalPreOrder(node*,std::vector<int>*);
    void traversalPostOrder(node*,std::vector<int>*);
    void traversalBFS(node*,std::forward_list<int>*,int);
    int heightTree(node*);
    node *root;
};

#endif
