#include "Node.h"
#include<iostream>
#include<stdlib.h>
#include<set>
#include<stack>

//Member functions
void Node::appendToTail(int d){
  Node *end = new Node{d};
  Node *current = this;
  while(current->next!=NULL)  
    current=current->next;
  current->next = end;  
}

Node* Node::appendToStart(Node *head, int d){
  Node *begin = new Node{d};
  Node *current = head;
  begin->next=current;
  return begin;
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

bool Node::isEmpty(Node *head){
  if(head==NULL)
    return true;
  return false;
}

int Node::sizeOfNode(Node *head){
  Node *current = head;
  int count = 0;
  if(!isEmpty(current)){
    count++;
    while(current->next!=NULL){
      current=current->next;
      count++;
    }
  }
  return count;
}

void Node::traverseNode(Node *head){
 Node *current = head;
 if(!isEmpty(current))
  while(current!=NULL){
    std::cout<<"Node Value : "<<current->data<<std::endl;
    current=current->next;
  }
 else 
  std::cout<<"No Node found"<<std::endl;
}

Node* Node::removeDuplicates(Node* head){
  std::set<int> uniq_list_val;
  Node* current = head;
  if(!isEmpty(current)){
    uniq_list_val.insert(current->data);
    while(current->next!=NULL){
      if(uniq_list_val.count(current->next->data)==1)
        current->next = current->next->next;
      else{
        uniq_list_val.insert(current->next->data);
        current=current->next;
      }
    }
 }
 return head;
}

Node* Node::findkthToLast(Node* head, int k){
  Node* current = head;
  Node* headstart = head;
  int count = 1;
  while(count<=k){
    headstart=headstart->next;
    count++;
  }
  while(headstart!=NULL){
    current = current->next;
    headstart = headstart->next;
  }
  return current;
}

Node* Node::mergeList(Node* head1, Node* head2){
  Node* current = head1;
  current = findkthToLast(current,1);
  current->next = head2;
  return head1;  
}

Node* Node::zigzagMergeList(Node* head1, Node* head2){
  Node* current1 = head1;
  Node* current2 = head2;
  Node* temp1 = NULL;
  Node* temp2 = NULL;
  int i = 0;
  while(current1!=NULL && current2!=NULL){
    if(i%2 == 0){
      if(i!=0){
        current1->next = temp1;
        current1 = current1->next;
      }
    }
    else
    {
      temp1 = current1->next;
      current1->next = current2;
      current2 = current2->next;
      current1 = current1->next;
    }
    i++;    
  }
  if(current2==NULL)
    current1 = mergeList(current1,temp1);
  else if(current1==NULL){
    current1 = mergeList(head1,current2);
  }
  return head1;
}

int Node::getValue(Node* head){
  if(!isEmpty(head))
    return head->data;
  return NULL;
}

bool Node::isPalindrome(Node* head){
  
  Node *current = head;
  int size = sizeOfNode(current);
  int halfway_list = (size/2);
  std::stack<int> store_list;
  int count=0;
  while(count<halfway_list){
      store_list.push(current->data);
      current=current->next;
      count++;
  }
  
  if(size%2 != 0){
    current=current->next;  
  }
  while(!store_list.empty()){
    if(current->data != store_list.top())
      return false;
    store_list.pop();
    current=current->next;
  }
  if(current!=NULL)
    return false;
  return true;
}
