// PASS BY REFERENCE USING ALIAS
// ALIAS USING & OPERATOR
#include<iostream>
using namespace std;
void swap(int &a, int &b){  // just used & operator in pass by value.
    int temp = a;
    a = b;  
    b = temp;
    return;
}
int main(){
    int a , b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}