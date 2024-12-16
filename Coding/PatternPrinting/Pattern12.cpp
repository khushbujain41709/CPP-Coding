// Pattern - Star Plus
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    int mid = row/2 + 1 ;  // in case of odd number (n) only.
    for(int i = 1 ; i <= row; i++){
        for(int j = 1 ; j <= row ; j ++){
            if(i == mid || j == mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}