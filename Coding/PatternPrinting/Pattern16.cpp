#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    // for(int i = 1 ; i <= row; i++){
    //     for (int j = 1 ; j <= row - i; j++){ // formula of ap from last term -> n - k +1; But did n-k because we need to run loop one time less.
    //         cout<<" ";
    //     }
    //     for(int k = 1 ;  k <= i ; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i = 1 ; i <= row; i++){
        for (int j = 1 ; j <= row; j++){
            if ((i+j) >= row+1 ) cout<<'*'; 
        
        else cout<<" ";
    }
    cout<< endl;
    }
}

