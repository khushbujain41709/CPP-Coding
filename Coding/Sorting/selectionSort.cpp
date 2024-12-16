// Here we swap the element with the smallest element of further array elements.
// for n elements we do n-1 rounds.
// Time complexity = O(n^2)
// Space complexity = O(1)
// Best case Time complexity = O(n^2) 
// Worst case Time complexity = O(n^2)  
// Unstable algorithm
// In ith round we are placing ith smallest element at starting(i starting from 0)

// Total swaps = n-1 swaps

// Use cases -
// 1) Generally , if size of the array is small then we use selection sort.
// 2) It has less number of swaps so cost of swapping is less.
// 3) starting se k minimum elements out of n gets sorted.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array : ";
    for (int i = 0;i<size;i++){  
        cin>>arr[i];
    }
    for (int i = 0;i < size-1;i++){     // n-1 rounds
        int minIndex = i;
        for(int j = i+1 ; j<size ;j++){ // n-1 rounds
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }   
        } 
        swap(arr[i],arr[minIndex]); // swap with first index that is arr[i]
    }
    cout<<"Enter the elements of array after selection sort : ";
    for (int i = 0;i<size;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}