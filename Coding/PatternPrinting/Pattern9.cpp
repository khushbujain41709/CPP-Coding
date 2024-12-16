#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i = 1 ; i <= row; i++){
        for(int j = 1 ; j <= 2*i-1 ; j += 2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}