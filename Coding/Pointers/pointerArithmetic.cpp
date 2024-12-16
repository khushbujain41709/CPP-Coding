#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int* ptrr = &a;
    cout<<ptrr<<endl;
    ptrr = ptrr + 1;   // ADDITION OPERATION ON INTEGER POINTER TAKES 4 BYTES AHEAD IN HEXADECIMAL SYSTEM.
    cout<<ptrr<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    bool flag = true;
    bool* ptr1 = &flag;
    cout<<ptr1<<endl;
    ptr1 = ptr1 + 1;  // ADDITION OPERATION ON BOOLEAN POINTER TAKES 1 BYTE AHEAD IN HEXADECIMAL SYSTEM.
    cout<<ptr1<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl;    // 4
    cout<<ptr<<endl;
    *ptr = *ptr + 1;
    cout<<*ptr<<endl;  // 5
    (*ptr)++;    // *ptr++ (without bracket will cause error)
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    ptr = ptr + 1;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    return 0;
}