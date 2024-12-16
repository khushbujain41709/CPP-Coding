#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int last_digit = 0;
    int reverse_num = 0;
    while(num>0){
        reverse_num *= 10;
        last_digit = num % 10;
        reverse_num += last_digit;
        num /= 10;
    }
    cout<<"Reverse digit is : "<<reverse_num<<endl;
    return 0;
}
