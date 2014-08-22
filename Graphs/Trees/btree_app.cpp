#include "bstree.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
int main(int argc, char**argv){
  bstree bt;
  double cpu_time_used;
  for(int i=1;i<=7;i++){
    bt.insertNode(i);
  }
  node *searchedNode;
  std::clock_t start_time;
  start_time=std::clock();
  searchedNode = bt.searchNode(5);
  cpu_time_used=difftime(std::clock(),start_time)/ (double) CLOCKS_PER_SEC;
  std::cout << "The time used to search in binary tree is " << cpu_time_used << " seconds.\n";
  if(searchedNode!=NULL)
    std::cout<<"Node found with value : " <<searchedNode->key_value<<std::endl;
  else
    std::cout<<"No Such node found" <<std::endl;
  std::vector<int> list;
  list.reserve(7);
  bt.traversalPreOrder(list);
  std::cout<<"Height of Unbalanced Tree: " << bt.heightTree() <<std::endl;
  //std::cout<<"PreOrder Traversal: " << std::endl;
  //for(unsigned i=0;i<list.size();i++)
   //std::cout<<list.at(i)<<" ";
  //std::cout<<std::endl;
  bstree bst;
  bt.balanceTree(list,bst);
  //std::vector<int> balancedlist;
  //balancedlist.reserve(10000);
  //bst->traversalPreOrder(&balancedlist);
  start_time=std::clock();
  searchedNode = bst.searchNode(5);
  cpu_time_used=difftime(std::clock(),start_time)/(double) CLOCKS_PER_SEC;
  std::cout << "The time used to search in binary search tree is " << cpu_time_used << " seconds.\n";
  std::cout<<"Height of balanced Tree: " << bst.heightTree() <<std::endl;
  //std::cout<<"Balanced List PreOrder Traversal: " << std::endl;
  //for(unsigned i=0;i<balancedlist.size();i++)
   //std::cout<<balancedlist.at(i)<<" ";
  //std::cout<<std::endl;
  std::forward_list<int> flist;
  bst.traversalBFS(flist);
  std::forward_list<int>::iterator ci;
  for(ci = flist.begin(); ci!=flist.end();++ci){
    std::cout<<(*ci)<<std::endl;
  }
  delete searchedNode;
  return 0;
}
