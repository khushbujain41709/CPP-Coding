// Leetcode - 41 Hard
// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
/*
DRY RUN ->
Input: nums = [3, 4, -1, 1]
nums = [3, 4, -1, 1]
First Loop (Indexing)
First Iteration (indx = 0):
nums[0] = 3
nums[2] != nums[0] (since nums[2] = -1 and nums[0] = 3)
Swap nums[2] and nums[0]
nums = [-1, 4, 3, 1]

Second Iteration (indx = 1):
nums[1] = 4
nums[3] != nums[1] (since nums[3] = 1 and nums[1] = 4)
Swap nums[3] and nums[1]
nums = [-1, 1, 3, 4]

Third Iteration (indx = 1) (again, due to the swap):
nums[1] = 1
nums[0] != nums[1] (since nums[0] = -1 and nums[1] = 1)
Swap nums[0] and nums[1]
nums = [1, -1, 3, 4]

Fourth Iteration (indx = 2):
nums[2] = 3
nums[2] is already in the correct place.
No swap needed.

Fifth Iteration (indx = 3):
nums[3] = 4
nums[3] is already in the correct place.
No swap needed.

Second Loop (Finding the Missing Positive)
After the first loop, the array looks like:
nums = [1, -1, 3, 4]
First Iteration (indx = 0):
nums[0] = 1
nums[0] is correct (1 at index 0).
Second Iteration (indx = 1):
nums[1] = -1
nums[1] is incorrect.
Return indx + 1 = 1 + 1 = 2
Thus, the smallest missing positive integer is 2.
*/
#include<iostream>
#include<vector>
using namespace std;
int firstMissingPositive2(vector<int>& nums){
    int n = nums.size();
    for(int i = 0;i<n;i++){
        while(nums[i] >= 1 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
            swap(nums[nums[i]-1],nums[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(nums[i] != i+1) return i+1;
    }
    return n+1;   // for nums = {1} so ans is n+1 = 2
}
// cyclic sort
int firstMissingPositive(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        if(nums[i] <= 0) i++;
        else if(nums[i] <= 0 || nums[i] > n || nums[i] == i+1 || nums[i] == nums[nums[i] - 1]){
            i++;
        }
        else{
            swap(nums[nums[i]-1],nums[i]);
        } 
    }
    for(int i = 0;i<n;i++){
        if(nums[i] != i+1) return i+1;
    }
    return n+1;   // for nums = {1} so ans is n+1 = 2
}
int main(){
    vector<int> v = {3,4,-1,1};
    cout<<firstMissingPositive(v);
    return 0;
}