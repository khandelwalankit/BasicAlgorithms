#ifndef NODE_H_
#define NODE_H_

#include<iostream>

class Node
{
  public:
    Node(int d):data(d),next(NULL),previous(NULL){}  //member initialization
    Node* getNext();  
    Node* getPrevious();
    int getData();
    void setNext(Node*);
    void setPrevious(Node*);
  protected:
    int data;  
    Node *next;
    Node *previous;
};

class List{
  protected:
    Node* head;
  public:
    List(): head(NULL) {};
    void appendToTail(int);
    void appendToStart(int);
    void traverseList();  
    void deleteListValue(int);
    bool searchListValue(int);
    bool isEmpty();
    int sizeOfList();
    void removeDuplicates();
    int findkthToLast(int);
    Node* getHead();
    void setHead(Node*);
    void mergeList(List);
    void zigzagMergeList(List);
    bool isPalindrome();
    void reverseList(); 
};
#endif

