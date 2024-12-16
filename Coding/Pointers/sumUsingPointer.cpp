#include<iostream>
using namespace std;
int main(){
    float x , y;
    float* p = &x;
    float* q = &y;
    cout<<"Enter the first number : ";
    cin>>*p;
    cout<<"Enter the second number : ";
    cin>>*q;
    cout<<*p+*q<<" is the sum of given numbers."<<endl;
    return 0;
}