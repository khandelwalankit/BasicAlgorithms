/* Determine if the string has all unique characters */
#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int shiftRight(char *arr, int low, int high)
{
    int flag =0;
    int root = low;
    while((root*2)+1 <= high)
    {
        int leftChild = (root*2)+1;
        int rightChild = (root*2)+2;
    
        int swapIdx = root;
        if(arr[swapIdx] < arr[leftChild])
        {
            swapIdx = leftChild;
        }
        if((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
        {
            swapIdx = rightChild;
        }
        if((arr[root] == arr[leftChild]) || (arr[root] == arr[rightChild]))
        {
            
            flag = 1;
            break;
        }
        if(swapIdx != root)
        {
            char tmp = arr[swapIdx];
            arr[swapIdx] = arr[root];
            arr[root] = tmp;
            root = swapIdx;
        }
        else
        {
            break;
        }
    }
    return flag;
    
}
int heapify(char *arr, int low, int high)
{
    int flag = 0;
    int midIdx = (high - low -1)/2;
    while (midIdx>=0)
    {
        flag = shiftRight(arr, midIdx, high);
        midIdx--;
        if(flag ==1)
        {
            break;
        }
    }
    return flag;
}
void unique_string(char *arr, int size)
{
    //Sort the string according to heap sort
    int high = size-1;
    int flag = heapify(arr,0,high);
    if(flag == 1)
    {
        cout<<"The String is not unique"<<endl;
    }
    else
    {
        cout<<"The string is unique"<<endl;
    }
    /*while(high > 0)
    {
        int tmp = arr[high];
        arr[high] = arr[0];
        arr[0] = tmp;
        --high;
        shiftRight(arr, 0, high);
    }*/
}

int main(int argc, char **argv)
{
    int Size = 5;
    //char *arr = new char[Size];
    char arr[5] = {'a','b','c','d'};
    unique_string(arr,Size-1);
    cout << arr[0] <<endl; 
}
