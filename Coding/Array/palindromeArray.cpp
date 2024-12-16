//If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
using namespace std;
bool palindrome(int arr[] , int size){
    bool flag = true;
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool y = palindrome(arr,n);
    if(y == 1){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}