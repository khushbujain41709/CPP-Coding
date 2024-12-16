// Leetcode - 53
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Using brute force
int maxSubArray(vector<int>& nums , int k) {
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int i = 0;i<n-k+1;i++){
        int sum = 0;
        for(int j = i;j<i+k;j++){
            sum += nums[j];
            if(sum >= maxSum){
                maxSum = sum;
            }
        }
    } 
    return maxSum;
}
// Sliding Window

int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = INT_MIN;
    for(int i = 1;i<v.size()+1;i++){
        int sum = maxSubArray(v,i);
        if(sum >= ans){
            ans = sum;
        }
    }
    cout<<ans;
}