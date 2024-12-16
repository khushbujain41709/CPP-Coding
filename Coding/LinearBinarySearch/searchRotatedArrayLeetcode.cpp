// Leetcode - 33
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target){
            return mid;
        }
        // Handle duplicates: increment low and decrement high when nums[low], nums[mid], and nums[high] are equal
        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            ++low;   // imp  not equal to low ++;
            --high;  // imp  not equal to high --;
        }
        else if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid]){
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        } 
        else {
            if (nums[mid] < target && target <= nums[high]){
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> v = {28,33,1,5,6,7};  // gives wrong output for decreasing array case too
    int target = 33;
    cout<<search(v,target);
    return 0;
}