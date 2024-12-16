#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int max = arr[0];   
    // int max = INT_MIN;  This can also be written after importing #include<climits> and start loop from i = 0 so that we can check every element of array including arr[0]
    for(int i = 1 ;i< size;i++){   // traversing for size-1 time from i = 1 as we don't need to compare first element
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum element of array is : "<<max <<endl;
    return 0;
}