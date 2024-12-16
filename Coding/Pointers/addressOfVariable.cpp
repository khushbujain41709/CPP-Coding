// pointer is a way of storing variables
// we use &(ampercent) to print the address of a variable.
#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* p = &x;   // can also be written as int *p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;

    bool y = 3.4;
    bool* q = &y;
    cout<<&y<<endl;
    cout<<q<<endl;

    // Dereference operator - * star operator 
    cout<<*p<<endl;  // means p ke andar jo address rakha hai, uss address pe jao and vahan ki value print kra do.
    cout<<*q<<endl;

    int u = 35;
    int* v = &u;
    cout<<u<<endl;
    *p = 47;
    cout<<x<<endl; // modified value of x 
    return 0;
}