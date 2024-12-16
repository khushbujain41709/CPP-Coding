// Leetcode - 287 and leetcode - 442
#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        if(nums[i] == nums[nums[i]]) return nums[i];  // once sorted , at repeated element index , there is already exists its duplicate so return it.
        else swap(nums[i] , nums[nums[i]]);
    }
    return -1;
}
// This code is not valid for {3,3,3,3,3} and {2,5,9,6,9,3,8,9,7,1}
int findDuplicate(vector<int>& nums){
    int n = nums.size();
    int dupli = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += nums[i];
    }
    int maths_sum = n*(n-1)/2;
    return sum - maths_sum;
}
// All duplicates
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
    int n = nums.size();
    if(n == 1) return {};
    int i = 0;
    while(i < n){
        if(nums[i] != nums[nums[i] - 1]){
            swap(nums[i] , nums[nums[i] - 1]);
        }
        else i++;
    }
    for(int i = 0;i<n;i++){
        if(nums[i] != i+1){
            v.push_back(nums[i]);
        }
    }
    return v;
}
int main(){
    
    return 0;
}