// Leetcode - 1422
#include<iostream>
#include<vector>
using namespace std;
/*
Initialize two arrays, prefix and suffix, to store the cumulative count of zeros and ones.
Traverse the string from left to right and calculate the cumulative count of zeros in the prefix array.
Traverse the string from right to left and calculate the cumulative count of ones in the suffix array.
Iterate through the string and find the position to split the string, maximizing the score. The score at each position is the sum of the count of ones in the suffix array and the count of zeros in the prefix array.
*/
int maxScore(string s) {
    int n = s.length();
    vector<int> pref(n);
    vector<int> suff(n);
    int zero = 0 , one = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            zero ++;
            pref[i] = zero;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(s[i] == '1'){
            one ++;
            suff[i] = one;
        }
    }
    int ans = 0;
    for(int i = 0;i<n-1;i++){
        ans=max(ans,suff[i+1]+pref[i]);
    }
    return ans;
}
int main(){
    return 0;
}