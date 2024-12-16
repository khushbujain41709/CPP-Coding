// Leetcode - 1480 - Running sum of 1D Array
#include<iostream>
#include<vector>
using namespace std;
// Time complexity  - O(n) and Space complexity - O(1)
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1;i<n;i++){
        nums[i] = nums[i-1] + nums[i];
    }
    return nums;  
}
int main(){  
    return 0;
}