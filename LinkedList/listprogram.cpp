#include<iostream>
#include "Node.h"

int main(int argc, char **argv){
  Node head{10};
  head.appendToTail(20);
  head.appendToTail(30);
  head.appendToTail(40);
  Node *newhead = head.deleteNodes(&head,20);
  Node *searchedNode = head.searchNode(&head,20);
  if(searchedNode!=NULL)
    std::cout<< "Found Data"<<std::endl;
  else
    std::cout<< "Data not Found" <<std::endl;
  head.traverseNode(&head);
  return 1;
}
