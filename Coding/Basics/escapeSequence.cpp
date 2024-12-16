#include<iostream>
using namespace std;
int main(){
    // For using double quotes inside a double we use escape sequence \"
    cout<<"This is my \"first\" doubt session."<<endl;
    int a = 3; // inspite of having value , a is assigned with garbage due to b and b gets garbage value assigned due to c .
    int b , c , d = 3;
    a = b = c ;
    cout<<a << endl<< b<<endl  <<c <<endl;
    cout<<(d<<2)<<endl;
    // << - leftshift 
    // >> - rightshift
}