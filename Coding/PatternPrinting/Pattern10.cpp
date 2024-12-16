#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i = 1 ; i <= row; i++){
        for(int j = 'A' ; j < row + 'A' ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}