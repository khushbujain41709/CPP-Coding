#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i = 1 ; i <= row; i++){
        for (int j = 1 ; j <= row - i; j++){ 
            cout<<" ";
        }
        for(int m = 1 ; m <= row;m++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
