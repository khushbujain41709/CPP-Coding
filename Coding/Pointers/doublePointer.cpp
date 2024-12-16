// DOUBLE POINTER USED TO STORE ADDRESS OF A POINTER
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    int*** pp = &p;

    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;

    cout<<ptr<<endl;
    cout<<p<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl;


    return 0;
}
