// Leetcode - 136
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.You must implement a solution with a linear runtime complexity and use only constant extra space.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int singleNumber(vector<int>& nums) {
    int n = nums.size();
    int x;
    int result = 0;
    for(int i = 0;i<32;i++){  // // as integer is of 32 bits.
        int sum = 0;
        x = 1<<i;
        for(int j = 0;j<n;j++){
            if(nums[j] & x){  // Bitwise and Operator
                sum++;
            }
        }
        if(sum % 2 != 0){
            result |= x;   // Bitwise or operator 
        }
    } 
    return result;
}
int singleNumber2(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    for(int i = 0;i<n;i++){
        result ^= nums[i];   // XOR OPERATOR // Removes double occuring element // XOR the current number with the result. Numbers that appear twice will cancel each other out, leaving the single number.
    }
    return result;
}
int main(){
    vector<int> v = {1,1,2,9,2};
    int ans  = singleNumber(v);
    cout<<ans<<endl;
    return 0;
}