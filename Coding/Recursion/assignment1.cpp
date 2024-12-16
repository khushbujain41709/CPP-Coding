#include<iostream>
#include<vector>
using namespace std;
// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
int findSum(int a , int b){
    if(a>b){
        return 0;
    }
    if(a% 2 == 0){
        findSum(a+1 , b);
    }
    return a + findSum(a+2,b);
}

// Given a positive integer, return true if it is a power of 2.
bool pow(int n){
    if(n == 1){
        return true;
    }
    if(n%2 == 0){
        return pow(n/2);
    }
    return false;
}

// climb stairs 1 , 2 , 3 steps
int stair(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(n == 3){
        return 3;
    }
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int stair2(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    vector<int> v(n+1);
    v[0] = 0;
    v[1] = 1;
    v[2] = 2;
    for(int i = 3 ;i<= n;i++){
        v[i] = v[i-1] + v[i-2] + v[i-3];
    }
    return v[n];
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<pow(m)<<endl;
    cout<<stair2(n)<<endl;
    cout<<findSum(1,7)<<endl;
    return 0;
}