#ifndef SORT_H_
#define SORT_H_
#include<iostream>

class sort{
  protected:
    int size;
    int *array = NULL;
  public:
    sort(int arr_size, int *arr) : arr_size(size), arr(array) {}
    void heapSort(int*,int);
    void quickSort(int*,int);
    void mergeSort(int*,int);
}

#endif
