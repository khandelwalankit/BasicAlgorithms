
//To include all the libraries only once
#pragma once

#include<iostream>
#include<cstdlib>
#include"quicksort.cpp"

using namespace std;
int main(int argc, char** argv)
{
  int array[10] = {30,12,43,65,21,23,4,63,41,16};
  quicksort<int>(array,0,9);
  int i=0;
  cout<< "The output is:\n";
  while(i<10)
  {
    cout << " " << array[i] <<" ";
    i++;
  }
  cout <<"\n";
  return 0;
}


