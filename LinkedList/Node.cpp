#include "Node.h"
#include<iostream>
#include<stdlib.h>


//Member functions
void Node::appendToTail(int d){
  Node *end = new Node{d};
  Node *current = this;
  while(current->next!=NULL)  
    current=current->next;
  current->next = end;  
}

Node* Node::deleteNodes(Node *head,int d){
  Node *current = head;
 
  while(current->next!=NULL){
    if(current->next->data == d)
      current->next=current->next->next; 
    else
      current = current->next;
  }
  if(head->data==d){
      head = head->next;
  }
  return head;
} 

Node* Node::searchNode(Node *head,int d){
  Node *current = head;
  while(current!=NULL){
    if(current->data == d)
      return current;
    else
      current = current->next;
  }
  return current;
}

bool Node::verifyNodeEmpty(Node *head){
  if(head==NULL)
    return true;
  return false;
}

int Node::sizeOfNode(Node *head){
  Node *current = head;
  int count = 0;
  if(!verifyNodeEmpty(current)){
    count++;
    while(current->next!=NULL)
      count++;
  }
  return count;
}

void Node::traverseNode(Node *head){
 Node *current = head;
 if(!verifyNodeEmpty(current))
  while(current!=NULL){
    std::cout<<"Node Value : "<<current->data<<std::endl;
    current=current->next;
  }
 else 
  std::cout<<"No Node found"<<std::endl;
}
