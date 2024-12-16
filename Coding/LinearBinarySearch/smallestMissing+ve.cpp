// Leetcode - 41 - Hard
// Done in O(n) complexity in Array section - missingNumber.cpp and Similar question is in arrayAssignment.cpp
#include<iostream>
#include<vector>
using namespace std;
// This code has O(logn) time complexity
int searchMissing(vector<int>& nums) {
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;  // indicates nothing is missing
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
int main(){
    vector<int> v = {0,1,3,5,6,8,};
    cout<<searchMissing(v);
    return 0;
    return 0;
}