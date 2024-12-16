#include<iostream>
using namespace std;
int main(){
    int x , size;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>x;
    bool flag = 0;  // check mark
    for(int i = 0;i<size;i++){
        if(arr[i] == x){
            cout<<"Element found at index : "<<i<<endl;
            flag = 1;
        }    
    }
    if(flag == 0){
        cout<<"Error 404 - Element not found!"<<endl;
    }
    return 0;
}