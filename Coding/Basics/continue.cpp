#include<iostream>
using namespace std;
int main(){
    //continue is used to skip the round or iterations.
    int n ;
    cout << "Enter a number : ";
    cin>> n;
    for (int i = 1 ; i <= n ; i++){
        if(i%2 == 0) continue;
        cout<<i<<endl; // this line is not a part of if statement
    }
}