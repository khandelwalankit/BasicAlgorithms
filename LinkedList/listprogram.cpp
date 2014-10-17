#include<iostream>
#include "Node.h"

void check_appendToTail(List &ls){
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
}

void check_appendToStart(List &ls){
  ls.appendToStart(10);
  ls.appendToStart(5);
  ls.appendToStart(10);
  ls.appendToStart(10);
  ls.appendToStart(10);
  ls.traverseList();  
}

void check_deleteValue(List &ls){
  ls.deleteListValue(20);
  ls.traverseList();  
}

void check_searchValue(List &ls){
  if(ls.searchListValue(10))
    std::cout<< "Value Found" <<std::endl;
  else
    std::cout<<"Value not Found"<< std::endl;
}

void check_removeDuplicates(List &ls){
  ls.removeDuplicates();
  std::cout<<"List without Duplicates" <<std::endl;
  ls.traverseList();  
}

void check_kthElement(List &ls){
  std::cout<< "Find 3rd last element: " << ls.findkthToLast(3) <<std::endl;
}

void check_mergeList(List &ls){
  List ls2;
  ls2.appendToTail(200);
  ls2.appendToTail(400);
  ls2.appendToTail(800);
  ls.mergeList(ls2);
  ls.traverseList();  
}

void check_zigzagMerge(List &ls){
  List ls2;
  ls2.appendToTail(200);
  ls2.appendToTail(400);
  ls2.appendToTail(800);
  ls.zigzagMergeList(ls2);
  ls.traverseList();
}

void check_palindrome(){
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

}

void check_reverseList(List& ls){
  //ls.reverse();
}

void check_recursive_rev_alt_node(List &ls){
  //ls.recursive_rev_alt_node();
}


int main(int argc, char **argv){
  List ls;
  check_appendToTail(ls);
  check_appendToStart(ls);
  check_deleteValue(ls);
  check_searchValue(ls);
  check_removeDuplicates(ls);
  check_kthElement(ls);
  check_palindrome();
  check_reverse(ls);
  check_recursive_rev_alt_node(ls);
  return 1;
}
