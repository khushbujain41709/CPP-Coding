// Bridge    
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter no. of lines in butterfly's upper wing : ";
    cin>> n;
    for(int i = 1 ; i<=n;i++){
        for(int j = 1; j<= i;j++){
            cout<<"*";
        }
        for(int k = 2*(n-i+1);k>=1;k--){
            cout<<" ";
        }
        for(int j = 1; j<= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1 ; i<=2*n+2 ; i++){
        cout<<"*";
    }
    cout<<endl;
    int nsp = 2;
    for(int i = 1 ; i<=n;i++){
        for(int j = 1; j<= n-i+1;j++){
            cout<<"*";
        }
        for(int k = 1; k<=nsp ;k++){
            cout<<" ";
        }
        nsp +=2;
        for(int j = 1; j<= n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}