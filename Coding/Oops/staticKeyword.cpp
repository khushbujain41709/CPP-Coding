// static keyword is used with a variable to make the variable memory static once it is declared its memory can't be changed.
// Implementation in class - see in arrayOfObjects.cpp file
#include<iostream>
using namespace std;
void print(){
    int b = 10;
    cout<<b<<endl;
    b++;
}
void printStatic(){
    static int b = 10;
    cout<<b<<endl;
    b++;
}
int main(){
    print();
    print();
    print();
    cout<<"--------------------------------------------------------------"<<endl;
    printStatic();
    printStatic();
    printStatic();
    return 0;
} 