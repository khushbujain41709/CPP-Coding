#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i = 1 ; i <= row; i++){
        for (int j = 1 ; j <= row - i; j++){ // formula of ap from last term -> n - k +1; But did n-k because we need to run loop one time less.
            cout<<" ";
        }
        int a = 1;
        for(int k = 1 ;  k <= i ; k++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
