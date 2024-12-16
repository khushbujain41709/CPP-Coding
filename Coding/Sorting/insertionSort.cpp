// Here we shift larger element towards right and place the smaller element in their place.
// In insertion sort we don't swap elements instead , we shift elements.
// n-1 rounds of i.
// It is adaptable as we are not traversing the whole array
// Stable Algorithm
// Generally , if size of the array is small then we use insertion sort.
// Time complexity = O(n^2)
// Space complexity = O(1)
// Best case Time complexity = O(n) 
// Worst case Time complexity = O(n^2)
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
    for(int i = 1;i<size;i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1]){  // j starts from 1 instead of 0 as j-1 will go out of bound.
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"Enter the elements of array after insertion sort : ";
    for (int i = 0;i<size;i++){
        cout<<arr[i] <<" ";
    }
}