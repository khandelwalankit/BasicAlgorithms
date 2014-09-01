#include<iostream>
#include "Node.h"

int main(int argc, char **argv){
  List ls;
  ls.appendToTail(20);
  ls.appendToTail(30);
  ls.appendToTail(50);
  ls.appendToTail(60);
  ls.appendToTail(70);
  ls.appendToTail(80);
  ls.appendToTail(90);
  ls.appendToTail(105);
  ls.appendToTail(106);
  ls.traverseList();  
  ls.appendToStart(10);
  ls.appendToStart(5);
  ls.appendToStart(10);
  ls.appendToStart(10);
  ls.appendToStart(10);
  ls.deleteListValue(20);
  ls.traverseList();  
  if(ls.searchListValue(10))
    std::cout<< "Value Found" <<std::endl;
  else
    std::cout<<"Value not Found"<< std::endl;
  
  ls.removeDuplicates();
  std::cout<<"List without Duplicates" <<std::endl;
  ls.traverseList();  
  std::cout<< "Find 3rd last element: " << ls.findkthToLast(3) <<std::endl;
  List ls2;
  ls2.appendToTail(200);
  ls2.appendToTail(400);
  ls2.appendToTail(800);
  //ls.mergeList(ls2);
  ls.zigzagMergeList(ls2);
  ls.traverseList();
  List checkPalindrome;
  //checkPalindrome.appendToTail(10);
  checkPalindrome.appendToTail(20);
  checkPalindrome.appendToTail(30);
  checkPalindrome.appendToTail(40);
  checkPalindrome.appendToTail(30);
  checkPalindrome.appendToTail(20);
  //checkPalindrome.appendToTail(10);
  if(checkPalindrome.isPalindrome())
    std::cout<<"List is Palindrome"<<std::endl;
  else
    std::cout<<"List is not Palindrome"<<std::endl;
  return 1;
}
