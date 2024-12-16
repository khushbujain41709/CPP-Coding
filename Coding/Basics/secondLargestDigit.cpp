#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int max_digit = -1;
    int second_max_digit = -1;
    while(n>0){
        int digit = n % 10;
        if (digit>max_digit){
            second_max_digit = max_digit;
            max_digit = digit;
        }
        else if (digit<max_digit && digit>second_max_digit){
            second_max_digit = digit;
        }
        n /= 10;
    }
    cout<<second_max_digit;
}