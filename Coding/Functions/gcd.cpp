#include<iostream>
using namespace std;
int gcd(int a , int b){
    int maxi = 1;
    // for(int i = 1; i<=min(a,b);i++){
    //     if(a%i==0 && b%i==0){
    //         maxi = i;
    //     }
    // }
    for(int i = min(a,b); i>=1;i--){ // from back traversing we will get hcf at first time without traversing further
        if(a%i==0 && b%i==0){
            maxi = i;
            break;
        }
    }
    // Time complexity = O(min(a,b))
    return maxi;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<< gcd(a,b);
    return 0;
}