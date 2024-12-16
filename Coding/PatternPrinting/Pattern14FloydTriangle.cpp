#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    int k = 1;
    for(int i = 1 ; i <= row; i++){
        for(int j = 1 ; j <= i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}