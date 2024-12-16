#include<iostream>
using namespace std;
int main(){
    int size , x;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number : ";
    cin>>x;
    int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Number of elements greater than "<<x<<" is : "<<count<<endl;
    return 0;
}