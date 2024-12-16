// Bridge    
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter no. of lines in bridge : ";
    cin>> n;
    int m = n-1;   // we are printing pattern from line m .
    // to find j = no. of stars before or after spaces , we observe that i+j = m+1 , so j = m+1-i.
    int nsp =1;
    // Top layer of bridge consists of 2*n-1
    for(int i = 1 ; i<=2*n-1 ; i++){
        cout<<i;
    }
    cout<<endl;
    for(int i = 1 ; i<=m ;i++){
        int a = 1;
        for(int j = 1; j<= m-i+1;j++){
            cout<<a;
            a++;
        }
        for(int k = 1 ; k<=nsp ;k++){
            cout<<" ";
            a++;
        }
        nsp +=2;
        for(int j = 1; j<=m-i+1;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}