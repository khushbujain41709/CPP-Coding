#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,5,2,78,33,2,4};

    cout<<arr[5]<<endl;

    // int arr1[]; This is not allowed

    int arr1[] = {2,52,46,7,3,6,3,5,3,64,2,5,2,8,67,75,573,43,342,55,64};
    int sz = sizeof(arr1)/sizeof(arr1[0]);
    cout<<sz<<endl;

    int arr2[5];

    // Memory allocation
    cout<<&arr2<<endl;  
    cout<<arr2<<endl;   // same as address of arr 
    cout<<&arr2[0]<<endl;  // address of arr
    cout<<&arr2[1]<<endl;
    cout<<&arr2[2]<<endl;
    cout<<&arr2[3]<<endl;

    return 0;
}