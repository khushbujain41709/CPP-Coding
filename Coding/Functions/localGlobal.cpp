#include<iostream>
using namespace std;
// Local variable priority is greater than global variable.
int a = 9;
int b = 8;
void f(){
    cout<<a<<" "<<b<<endl;
}
int main(){
    cout<<a<<endl;
    int a = 4;
    cout<<a<<endl;
    b = 3;  // global variable original value is changed
    cout<<b<<endl;
    f();
    return 0;
}