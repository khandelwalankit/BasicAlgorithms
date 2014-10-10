#include<iostream>
#include<stdlib.h>

using namespace std;

void merge(int *arr1, int *arr2, int low, int mid, int high){
  int i, j, k;
  i = low;
  j = low;
  k = mid+1;
  while(j<=mid && k<=high){
    if(arr1[j]<=arr1[k]){
      arr2[i] = arr1[j];
      j++;
    }
    else{
      arr2[i] = arr1[k];
      k++;
    }
    i++;
  }
  if(j>mid){
    for(k;k<=high;k++){
      arr2[i] = arr1[k];
      i++;
    }
  }
  else{
    for(j;j<=mid;j++){
      arr2[i] = arr1[j];
      i++;
    }   
  }
  for(int i = low; i<=high; i++){
    arr1[i] = arr2[i];
  }
}
void mergesort(int *arr1,int *arr2, int low, int high){
  int mid = (low+high)/2;
  if(low<high){
    mergesort(arr1,arr2,low,mid);
    mergesort(arr1,arr2,mid+1,high);
    merge(arr1,arr2,low, mid, high);
  }
}
int main(int argc, char**argv){
  //Assign vector
  
  int size = 10;
  int arr[size];
  int arr2[size];
  cout<<"Unsorted List:"<<endl;
  for(std::size_t i = 0;i<size;++i){
    arr[i] = rand()%size;
    cout<<arr[i]<<endl;
  }  
  mergesort(arr,arr2,0,size-1);
  cout<<"Sorted List:"<<endl;
  for(int i =0;i<size;i++){
    cout<< arr[i] << endl;    
  }
}
