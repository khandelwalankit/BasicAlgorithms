#include "btree.h"
#include <iostream>
#include <stdlib.h>
#include <algorithm>
//Member Functions of class btree
btree::btree(){
  root = NULL;
}

btree::~btree(){
  destroyTree();
}

bool btree::isEmpty(){
  if(root == NULL) 
    return true; 
  return false;
}

void btree::insertLeftNode(int key, node *leaf){
 if(leaf->left!=NULL)
      insertNode(key,leaf->left);
    else{
      leaf->left = new node;
      leaf->left->key_value = key; 
    }
}

void btree::insertRightNode(int key, node* leaf){
 if(leaf->right!=NULL)
      insertNode(key,leaf->right);
    else{
      leaf->right = new node;
      leaf->right->key_value = key;
    }
}

void btree::insertNode(int key, node *leaf){
  if(leaf->key_value > key)
    insertLeftNode(key,leaf);           
  else
    insertRightNode(key,leaf);
}

node* btree::searchNode(int key, node* leaf){
  if(leaf!=NULL){
    if(leaf->key_value > key)
      return searchNode(key, leaf->left);
    else if(leaf->key_value < key)
      return searchNode(key, leaf->right);
    else
      return leaf;
  }
  return NULL;
}

void btree::destroyTree(node* leaf){
  if(leaf!=NULL)
  {
    destroyTree(leaf->left);
    destroyTree(leaf->right);
    delete leaf;
  }  
}

void btree::insertNode(int key){
  if(!isEmpty())
    insertNode(key,root);
  else{
    root = new node;
    root->key_value = key;
  }
}

node* btree::searchNode(int key){
  return searchNode(key,root);
}

//pnode: parent, rnode: right child, lnode: left child
void btree::traversalInOrder(node* pnode, std::vector<int> *list){
  if(pnode==NULL)
    return;
  traversalInOrder(pnode->left,list);
  list->push_back(pnode->key_value);
  traversalInOrder(pnode->right,list);
}

void btree::traversalPostOrder(node* pnode, std::vector<int> *list){
  if(pnode==NULL)
    return;
  traversalPostOrder(pnode->left,list);
  traversalPostOrder(pnode->right,list);
  list->push_back(pnode->key_value);
}

void btree::traversalPreOrder(node* pnode,std::vector<int> *list){
  if(pnode==NULL)
    return;
  list->push_back(pnode->key_value);
  traversalPreOrder(pnode->left,list);
  traversalPreOrder(pnode->right,list);
}

void btree::traversalPreOrder(std::vector<int> &list){
  traversalPreOrder(root,&list);
} 

void btree::traversalInOrder(std::vector<int> &list){
  traversalInOrder(root,&list);
}

void btree::traversalPostOrder(std::vector<int> &list){
  traversalPostOrder(root,&list);
}

int btree::heightTree(node* pnode){
  if(pnode == NULL)
    return -1;
  return  (std::max(heightTree(pnode->left),heightTree(pnode->right)) + 1);  
}

int btree::heightTree(){
  return heightTree(root);
}

void btree::traversalBFS(node* pnode, std::forward_list<int> *list, int level){
  if(level==0){
    list->push_front(pnode->key_value);
  }
  else{
    int leftlevel = level;
    int rightlevel = level;
    if(pnode->left!=NULL)
      traversalBFS(pnode->left,list,--leftlevel);
    if(pnode->right!=NULL)
      traversalBFS(pnode->right,list,--rightlevel);
  }
}

void btree::traversalBFS(std::forward_list<int> &list){
  int height = heightTree(root);
  for (int i =height;i>=0;i--){
    traversalBFS(root,&list,i);  
  }
}

void btree::destroyTree(){
  destroyTree(root);
}

