// Time complexity = 1+2+4+8+....+n = n-1 or n term almost(not x terms)= O(2^n).
// Exponential Time complexity
#include<iostream>
using namespace std;
int numFibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    // int leftAns = numFibo(n-1);
    // int rightAns = numFibo(n-2);
    // return leftAns + rightAns;
    // leftAns evaluates first , then return it to call then rightAns gets evaluated.
    return numFibo(n-1)+numFibo(n-2);  // Euler's tour tree - implementation just like binary tree left to right implementation.
}
int main(){
    int num;
    cout<<"Enter nth fibonacci number : ";
    cin>>num;
    int res = numFibo(num);
    cout<<res<<endl;
    return 0;
}