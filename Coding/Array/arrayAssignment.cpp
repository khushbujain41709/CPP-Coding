#include<iostream>
#include<climits>
using namespace std;
int missing(int arr[] , int sort_size){
    int missing = arr[0];
    if(arr[0] != 0) return 0;
    for(int i = 0 ; i<sort_size;i++){
        if(arr[i] <= missing){
            missing ++;
        }
        else{
            break;
        }
    }
    return missing;
}
int main(){
    // question 1 ...............................................................
    int size;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int product = 1;
    for (int i = 0 ; i<size;i++){
        product *= arr[i];
    }
    cout<<"Product of elements of given array is : "<<product<<endl;
    // question 2 .............................................................
    int smax = INT_MIN;
    int maxi;
    for(int i = 0 ;i<size-1;i++){
        maxi = max(arr[i],arr[i+1]);
        if(smax<arr[i] && arr[i] != maxi){   // incoreect code 
            smax = arr[i];
        }
    }
    cout<<"Maximum element of array is : "<<maxi<<endl;
    cout<<"Second maximum element of array is : "<<smax<<endl;
    //question 3 ...............................................................
    int min = arr[0];
    for(int i = 0 ;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum element of array is : "<<min<<endl;
    //question 4 ...............................................................
    for(int i = 0 ; i<size-1;i++){
        for(int j = i+1 ; j<size-i-1;j++){
            if(arr[j]==arr[i]){
                cout<<"DUPLICATES PRESENT";
                break;
            }
        }
    }
    // question 5 ..............................................................
    int sorted_arr[5] = {7,8,9,11,12};
    int sort_size = sizeof(arr)/sizeof(arr[0]);
    int answer = missing(sorted_arr , sort_size);
    cout<<answer<<endl; 
    return 0;
}