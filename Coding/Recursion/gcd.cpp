// hcf(a,b) or gcd(a,b) <= min(a,b);
// lcm(a,b) >= max(a,b);
#include<iostream>
using namespace std;
// Recursively using long division method or Euclid's division algorithm
// a < b or b < a and remainder = b % a where modulud has O(1) time complexity
int gcd(int a , int b){
    if(a == 0){
        return b;
    }
    else return gcd(b % a , a);
}
// Time complexity = O(log(a+b))   // imp
int main(){
    int a,b;
    a = 27;
    b = 45;
    cout<<gcd(a,b)<<endl;
    return 0;
}