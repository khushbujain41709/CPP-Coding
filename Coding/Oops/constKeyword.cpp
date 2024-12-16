// When we use const keyword , it becomes constant and it's value cannot be changed.
// constant function - which doesnot change any data members generally getter setter.
//  In main function we have to initialize const variable otherwise it throws error.
// Inside class if declaring a variable as const we don't need to initialize it , we can do this using initialization list but not using constructor.
#include<iostream>
using namespace std;
const int PI = 3.14;
const int acc_gravity = 9.8;
int main(){
    const int a = 10;
    // a = 100; gives error as it cannot be updated.
    return 0;
}