#include <iostream>
#include <cstdlib>
#include <assert.h>

using namespace std;

void shiftRight(int *arr, int low, int high)
{
    int root = low;
    while((root*2)+1 <=high)
    {
        int leftChild = (root * 2) + 1; //Left child always 2*x+1 
        int rightChild = leftChild + 1; //Right Chile 2*x+2
        int swapIdx = root;
        if (arr[swapIdx] < arr[leftChild])
        {
            swapIdx = leftChild;
        }
        if ((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
        {
            swapIdx = rightChild;
        }
        if(swapIdx != root)
        {
            int tmp = arr[root];
            arr[root] = arr[swapIdx];
            arr[swapIdx] = tmp;
            root = swapIdx;
        }
        else
        {
            break;
        }

    }
    return;
}

void heapify(int *arr, int low, int high)
{
    int midIdx = (high - low -1)/2;
    while (midIdx >= 0)
    {
        shiftRight(arr, midIdx, high);
        --midIdx;
    }
    return;
}

void heapSort(int *arr, int size)
{
    assert(arr);
    assert(size > 0);
    //This will move greatest value on top
    heapify(arr, 0, size-1);
    int high = size - 1;
    while (high > 0)
    {
        int tmp = arr[high];
        arr[high] = arr[0];
        arr[0] = tmp;
        --high;
        shiftRight(arr, 0, high);
    }
}


int main(int argc, char **argv)
{
    int size = 6;
    int arr[6] = {8, 7, 6, 3, 9, 1};
    heapSort(arr, size);
    cout << arr[5];
    return 1;
}
