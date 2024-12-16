#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : ";
    cin>> n;
    int product = 1;
    cout<<"Fcatorial of 0 is : 1"<<endl;
    for(int i = 1 ; i <=n ; i++){
        cout<<"Factorial of "<<i <<" is : ";
        product *= i ;
        cout<<product;
        cout<<endl;
    }
    return 0; 
}