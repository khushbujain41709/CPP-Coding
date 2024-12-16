#include<iostream>
using namespace std;
// 1- * 
/* 2-  *
     * * *
       *
*/
int main(){
    int n;
    cout<<"Enter number in Diamond : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for (int i = 1 ; i<= 2*n -1 ; i++){
        for(int j = 1 ; j<= nsp ; j++){
            cout<<" ";
        }
        if (i<=n-1) nsp--;  // like for n = 4 , i = 7 we want to print spaces only till i = 3 and i = 4 line contain no spaces.
        else nsp++;
        for(int k = 1;k<=nst;k++){
            cout<<"*";
        }
        if (i<=n-1) nst += 2;
        else nst -= 2;
        cout<<endl;

    }
}