// Printing nth term of fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int a = 1 ;
    int b = 1 ;
    int sum = 0;
    int n ;
    cout << "Enter a number : ";
    cin>> n;  // 4
    for(int i = 1 ; i <= n-2 ; i++){  // 1  2
        sum = a+b;  // 3
        a = b;  // 2
        b = sum;  // 3
    }
    cout<<"Sum is : "<< b <<endl;  // since in case of printing sum we get sum for 1 = 0 and sum for 2 = 0 but we want it to be 1 so we are printing b instead of sum as by default b is 1. 
    return 0;
}