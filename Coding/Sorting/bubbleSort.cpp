// Time complexity = O(n^2) 
// Space complexity = O(1)
// we can optimise the code by using bool variable
// In ith round we are placing ith largest element at end.
// Best case Time complexity = O(n) 
// Worst case Time complexity = O(n^2)
// Space complexity = O(1)
// Stable algorithm

// How many maximum swapped are needed to sort an array of length n?
// => n(n-1)/2

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>> size;
    int arr[size];
    cout<<"Enter the elements of array : ";
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before bubble sort is : ";
    for(int i = 0 ; i<size;i++){
        cout<<arr[i] <<" ";
    }
    for(int i = 0 ; i<size-1;i++){   // n-1 times
    bool flag = true;
        for(int j = 0; j<size-i-1;j++){  // if i from 1 to n-1 then j will be from 0 to n-i-1
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = false;
            }
        }
        if (flag == true) // already sorted
            break;
    }
    cout<<endl;
    cout<<"Array after bubble sorting is : ";
    for(int i = 0 ; i<size;i++){
        cout<<arr[i] <<" ";
    }
}
