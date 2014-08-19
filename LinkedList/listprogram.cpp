#include<iostream>
#include "Node.h"

int main(int argc, char **argv){
  Node head{10};
  head.appendToTail(20);
  head.appendToTail(30);
  head.appendToTail(50);
  head.appendToTail(60);
  head.appendToTail(70);
  head.appendToTail(80);
  head.appendToTail(90);
  head.appendToTail(105);
  head.appendToTail(106);
  Node *newhead = head.appendToStart(&head,5);
  newhead = head.appendToStart(newhead, 10);
  newhead = head.appendToStart(newhead, 10);
  newhead = head.appendToStart(newhead, 10);
  Node *newhead1 = head.deleteNodes(newhead,20);
  Node *searchedNode = head.searchNode(newhead,20);
  newhead = head.removeDuplicates(newhead);
  Node head2{100};
  head2.appendToTail(200);
  head2.appendToTail(400);
  head2.appendToTail(800);
  newhead = head.zigzagMergeList(newhead,&head2);
  std::cout<< "Find 3rd last element: " << head.getValue((head.findkthToLast(newhead,3))) <<std::endl;
  if(searchedNode!=NULL)
    std::cout<< "Found Data"<<std::endl;
  else
    std::cout<< "Data not Found" <<std::endl;
  head.traverseNode(newhead);
  Node checkPalindrome{10};
  //checkPalindrome.appendToTail(20);
  //checkPalindrome.appendToTail(30);
  //checkPalindrome.appendToTail(40);
  //checkPalindrome.appendToTail(30);
  //checkPalindrome.appendToTail(20);
  checkPalindrome.appendToTail(10);
  if(checkPalindrome.isPalindrome(&checkPalindrome))
    std::cout<<"List is Palindrome"<<std::endl;
  else
    std::cout<<"List is not Palindrome"<<std::endl;
  return 1;
}
