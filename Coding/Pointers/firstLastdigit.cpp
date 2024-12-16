#include<iostream>
using namespace std;
void digit(int num , int*ptr1 , int*ptr2){
    *ptr2 = num % 10;
    while(num>9){
        num /= 10;
    }
    *ptr1 = num;
    return;
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int firstDigit;
    int lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    digit(num , ptr1 , ptr2);
    cout<<firstDigit <<" "<<lastDigit<<endl;
    return 0;
}