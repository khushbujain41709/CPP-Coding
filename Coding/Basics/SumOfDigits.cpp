#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : ";
    cin>> n;
    int sum  = 0;
    while(n>0){
        int remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    cout<<"The sum of digits of number is : "<<sum;
    return 0;
}