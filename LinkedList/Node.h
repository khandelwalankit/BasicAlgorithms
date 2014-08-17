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
    Node* appendToStart(Node*,int);
    void traverseNode(Node*);  
    Node* deleteNodes(Node*,int);
    Node* searchNode(Node*,int);
    bool verifyNodeEmpty(Node*);
    int sizeOfNode(Node*);
    int getValue(Node*);
    Node* removeDuplicates(Node*);
    Node* findkthToLast(Node*,int);
    Node* mergeList(Node*,Node*);
    Node* zigzagMergeList(Node*, Node*);
};
#endif

