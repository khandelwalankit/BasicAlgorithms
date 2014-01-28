#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

template<typename vary>
void quicksort (vary *arr, vary left_index, vary right_index)
{
  vary low_bound = left_index;
  vary up_bound = right_index;
  vary pivot_index =  abs((low_bound+up_bound)/2);//rand() % size;
  cout <<"The pivot is : "<< arr[pivot_index] << "\n";
  vary pivot = arr[pivot_index];
  while (low_bound <= up_bound)
  {
    while(arr[low_bound] < pivot)
      low_bound++;
    while(arr[up_bound] > pivot)
      up_bound--;
    if(low_bound <= up_bound)
    {
      vary temp = arr[low_bound];
      arr[low_bound] = arr[up_bound];
      arr[up_bound] = temp;
      low_bound++;
      up_bound--;
    }
  };

  if(up_bound > left_index)
  {
    quicksort(arr,left_index,up_bound);
  }
  if(low_bound < right_index)
  {
    quicksort(arr,low_bound, right_index);
  }
}

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
  return 0;
}
