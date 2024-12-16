#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0 ;i<size;i++){   // 2 0 9 4
        if(max<arr[i]){
            max = arr[i];  // 9
        }
    }
    for(int j = 0 ; j<size;j++){
        if(smax<arr[j] && arr[j] != max){
            smax = arr[j];  // 4
        }
    }
    cout<<"Maximum element of array is : "<<max<<endl;
    cout<<"Second maximum element of array is : "<<smax<<endl;
    return 0;
    // 234 = {2,3,4} 
}