// Leetcode - 268
// Follow up of missing number need solution in Time complexity - O(n) and Space complexity - O(1)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// binary search
int missingNumber2(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int low = 0;
    int high = nums.size()-1;
    int ans = n;  // indicates nothing is missing
    while(low<=high){
        int mid = low+(high-low)/2; // mid = (low+high)/2 gives error bcoz if high = INT_MAX and low = INT_MAX - 10 so (low + high)/2 will be out of bound.
        if(nums[mid] == mid){
            low = mid + 1; // as before mid all have same value as that of index
        }
        else{
            ans = mid;
            high = mid -1 ; 
        }
    }
    return ans;  // return the index where it would be if it were inserted in order.    
}
// cyclic sort
int missingNumber(vector<int>& nums){
    int i = 0;
    int n = nums.size();
    while(i < n){
        if(nums[i] < n && nums[i] != nums[nums[i]]){
            swap(nums[i],nums[nums[i]]);
        }
        else{
            i++;
        }
    }
    for(int i = 0;i<n;i++){
        if(nums[i] != i){
            return i;
        }
    }
    return n;
}
// math
int missingNumber3(vector<int>& nums){
    int sum = 0;
    int n = nums.size();
    for(int i = 0;i<n;i++){
        sum += nums[i]; 
    }
    int total_sum = n*(n+1)/2;
    if(n < nums.size()) return nums.size();
    else return total_sum - sum;
}
int main(){
    vector<int> v = {4,1,0,2};
    cout<<missingNumber3(v);
    return 0;
}