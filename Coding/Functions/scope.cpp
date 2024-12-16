#include<iostream>
using namespace std;
int a = 9;   // global variable
void f(){
    cout<<a;
}
void var(int x= 5,int y,int z){  // imp to give default values to other variables if given to one otherwise generate error
    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main(){   // Always first function to be executed
    cout<<a +3<<endl;
    f();
    cout<<endl;
    var(6,8,9);
    return 0;
} 