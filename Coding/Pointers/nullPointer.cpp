//NULL POINTER HAS RESERVED ADDRESS 0x0 or 0
#include<iostream>
using namespace std;
int main(){
    int* ptr = NULL;
    cout<<ptr<<endl;

    int* ptr1 = 0;     
    cout<<ptr1<<endl;

    int* ptr2 = '\0';  // null character
    cout<<ptr2<<endl;
    char ch = '\0';
    cout<<(int)ch<<endl;   // '\0' has ASCII value - 0
    
    return 0;
}