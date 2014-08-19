#include "btree.h"
#include <iostream>
#include <stdlib.h>

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

void btree::insertNode(int key, node *leaf){
  if(leaf->key_value > key){
    if(leaf->left!=NULL)
      insertNode(key,leaf->left);
    leaf->left = new node;
    leaf->left->key_value = key;         
  }
  else{
    if(leaf->right!=NULL)
      insertNode(key,leaf->right);
    leaf->right = new node;
    leaf->right->key_value = key;
  }
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

void btree::destroyTree(){
  destroyTree(root);
}

