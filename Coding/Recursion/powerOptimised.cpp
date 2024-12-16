// 2^64 takes 64 calls by ordinary method but in this method we can solve this by 6 calls 
// 2^64 = (2^32)^2 = (2^16)^2 = (2^8)^2 = (2^4)^2 = (2^2)^2 = (2^1)^2.
// So time complexity is O(log 64 base 2) = 6  as 2^x = n and x = log n base 2.
// space complexity = log n stack frames and time complexity = log n (in general).
#include<iostream>
#include<climits>
using namespace std;
// 1+2+4+8+16+...+n = 2n-1
double myPow(double x, int n){
    if(n == 0 && x == 0){
        cout<<"INDETERMINANT"<<endl;
        return INT_MIN;;
    }
    if(n==0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    if(n == -1){
        return 1/x;
    }
    if(n % 2 == 0){
        double ans = myPow(x,n/2);
            return ans*ans;
    }
    else{
        double ans = myPow(x,n/2);
            if(n<0){
                return 1/x*ans*ans;
            }
        return ans*ans*x;
    }
    }
int main(){
    cout<<myPow(34.00515,-3)<<endl;
    return 0;
}