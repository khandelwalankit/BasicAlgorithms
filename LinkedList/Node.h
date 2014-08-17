#ifndef NODE_H_
#define NODE_H_

#include<iostream>

class Node
{
  protected:
    int data;  
    Node *next = NULL;
  public:
    Node(int d):data(d){}  //member initialization
    void appendToTail(int);
    Node* deleteNodes(Node*,int);
    Node* searchNode(Node*,int);
    bool verifyNodeEmpty(Node*);
    int sizeOfNode(Node*); 
    void traverseNode(Node*);  
};
#endif

