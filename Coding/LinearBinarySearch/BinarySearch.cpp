// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.You must write an algorithm with O(log n) runtime complexity.

// Binary search works only if array is sorted both ascending or descending.
// Time Complexity = O(log n)
#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2; // mid = (low+high)/2 gives error bcoz if high = INT_MAX and low = INT_MAX - 10 so (low + high)/2 will be out of bound.
        if(nums[mid] > target){
            high = mid-1;
        }
        if(nums[mid]<target){
            low = mid+1;
        }
        if(nums[mid] == target){
            return mid;
        }
    }
    return low;  // return the index where it would be if it were inserted in order.
}
// For reverse array
int searchReverse(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2; // mid = (low+high)/2 gives error bcoz if high = INT_MAX and low = INT_MAX - 10 so (low + high)/2 will be out of bound.
        if(nums[mid] > target){
            low = mid + 1;  // imp instead of high = mid-1;
        }
        if(nums[mid]<target){
            high = low - 1; //imp instead oflow = mid+1;
        }
        if(nums[mid] == target){
            return mid;
        }
    }
    return low;  // return the index where it would be if it were inserted in order.
}
int main(){
    vector<int> v = {1,3,5,6};
    int target = 2;
    cout<<searchInsert(v,target)<<endl;
    int target2 = 5;
    cout<<searchInsert(v,target2)<<endl;

    vector<int> v2 = {8,6,4,2,1};
    int target = 8;
    cout<<searchInsert(v2,target)<<endl;
    int target2 = 5;
    cout<<searchInsert(v2,target2)<<endl;  // comes at 2 index if it was present

    return 0;
}