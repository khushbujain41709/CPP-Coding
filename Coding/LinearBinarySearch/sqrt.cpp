// Leetcode - 69
#include<iostream>
using namespace std;
int mySqrt(int x){
    int low = 0;
    int high = x;
    while(low <= high){
        int mid = low + (high - low)/2;
        long long m = (long long)mid;  // To avoid overflow
        long long y = (long long)x;
        if(m*m == y){
            return mid;
        }
        else if(m*m < y){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}
int main(){
    cout<<mySqrt(25);
    return 0;
}