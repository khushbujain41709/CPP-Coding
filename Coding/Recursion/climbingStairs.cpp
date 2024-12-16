// Leetcode - 70
// Climbing stairs or stair path
// You are climbing a staircase. It takes n steps to reach the top.Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
#include<iostream>
#include<vector>
using namespace std;
// Method 1 - Non workable in Leetcode due to TLE 
int climbStairs(int n) {
    // Time complexity = 1+2+4+8+....+n = n-1 or n term almost(not x terms)= O(2^n).
    // Exponential Time complexity
    // Only for this method
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    // By reccurence formula
    // stair(n) = stair(n-1) + stair(n-2) as climbing 1 or 2 steps
    // stair(n) = stair(n-1) + stair(n-2) + stair(n-4) as climbing 1 , 2 and 4 steps
    // Same as fibonacci pattern with 1 missing at start
    return climbStairs(n-1)+climbStairs(n-2);
}
// Method 2
int climbStairs2(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        vector<int> v(n+1);
        v[0] = v[1] = 1;       
        for (int i = 2; i <= n; i++) {
            v[i] = v[i-1] + v[i-2];
        }
        return v[n];
}
// Method 3
int climbStairs3(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        int prev = 1, curr = 1;
        for (int i = 2; i <= n; i++) {
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;
}
int main(){
    int n,ans;
    cin>>n;
    ans = climbStairs2(n);
    cout<<ans<<endl;
    return 0;
}