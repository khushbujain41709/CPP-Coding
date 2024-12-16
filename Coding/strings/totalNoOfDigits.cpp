#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    string str = to_string(num);
    int len = str.length();
    cout<<"Number of digits in a given number is : ";
    cout<<len<<endl;
    return 0;
}