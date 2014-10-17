#include "Node.h"
#include<iostream>
#include<stdlib.h>
#include<set>
#include<stack>


//Member functions of Node class
Node* Node::getNext(){
  return next;
}

int Node::getData(){
  return data;
}

void Node::setNext(Node* nextNode){
  next = nextNode;
}

void List::appendToTail(int d){
  if(head == NULL){
    head = new Node(d);
  }
  else{
    Node *current = head;
    while(current->getNext()!=NULL)
      current=current->getNext();
    current->setNext(new Node(d));
  }
  /*Node *end = new Node{d};
  Node *current = this;
  while(current->next!=NULL)  
    current=current->next;
  current->next = end;*/  
}

bool List::isEmpty(){
  if(head==NULL)
    return true;
  return false;
}

void List::traverseList(){
 Node *current = head;
 if(!isEmpty())
  while(current!=NULL){
    std::cout<<"Node Value : "<<current->getData()<<std::endl;
    current=current->getNext();
  }
 else 
  std::cout<<"No Node found"<<std::endl;
}

void List::appendToStart(int d){
  Node *begin = new Node(d);
  Node *current = head;
  begin->setNext(current);
  head = begin;
}

void List::deleteListValue(int d){
  Node *current = head;
 
  while(current->getNext()!=NULL){
    if((current->getNext())->getData() == d)
      current->setNext((current->getNext())->getNext()); 
    else
      current = current->getNext();
  }
  if(head->getData()==d){
      head = head->getNext();
  }
} 

bool List::searchListValue(int d){
  Node *current = head;
  while(current!=NULL){
    if(current->getData() == d)
      return true;
    else
      current = current->getNext();
  }
  return false;
}

int List::sizeOfList(){
  Node *current = head;
  int count = 0;
  if(!isEmpty()){
    count++;
    while(current->getNext()!=NULL){
      current=current->getNext();
      count++;
    }
  }
  return count;
}

void List::removeDuplicates(){
  std::set<int> uniq_list_val;
  Node* current = head;
  if(!isEmpty()){
    uniq_list_val.insert(current->getData());
    while(current->getNext()!=NULL){
      if(uniq_list_val.count((current->getNext())->getData())==1)
        current->setNext((current->getNext())->getNext());
      else{
        uniq_list_val.insert((current->getNext())->getData());
        current=current->getNext();
      }
    }
 }
}

int List::findkthToLast(int k){
  Node* current = head;
  Node* headstart = head;
  int count = 1;
  while(count<=k){
    headstart=headstart->getNext();
    count++;
  }
  while(headstart!=NULL){
    current = current->getNext();
    headstart = headstart->getNext();
  }
  return current->getData();
}

Node* List::getHead(){
  return head;
}

void List::setHead(Node* h){
  head = h;
}

void List::mergeList(List l2){
  Node* current = head;
  if(isEmpty()){
    current = l2.getHead();
    return;
  }
  while(current->getNext()!=NULL)
    current = current->getNext();
  current->setNext(l2.getHead());  
}

void List::zigzagMergeList(List ls2){
  Node* current1 = head;
  Node* current2 = ls2.getHead();
  Node* temp1 = NULL;
  int i = 0;
  while(current1!=NULL && current2!=NULL){
    if(i%2 == 0){
      if(i!=0){
        current1->setNext(temp1);
        current1 = current1->getNext();
      }
    }
    else
    {
      temp1 = current1->getNext();
      current1->setNext(current2);
      current2 = current2->getNext();
      current1 = current1->getNext();
    }
    i++;    
  }
  if(current2==NULL){
    List leftList;
    List rightList;
    leftList.setHead(current1);
    rightList.setHead(temp1);
    leftList.mergeList(rightList);
    current1 = leftList.getHead();
  }
  else if(current1==NULL){
    List leftList;
    leftList.setHead(current2);  
    mergeList(leftList);
    current1 = head;
  }
}

bool List::isPalindrome(){
  
  Node *current = head;
  int size = sizeOfList();
  int halfway_list = (size/2);
  std::stack<int> store_list;
  int count=0;
  while(count<halfway_list){
      store_list.push(current->getData());
      current=current->getNext();
      count++;
  }
  
  if(size%2 != 0){
    current=current->getNext();  
  }
  while(!store_list.empty()){
    if(current->getData() != store_list.top())
      return false;
    store_list.pop();
    current=current->getNext();
  }
  if(current!=NULL)
    return false;
  return true;
}
