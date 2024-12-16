// Leetcode - 34
#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v;
    int low = 0;
    int high = nums.size()-1;
    // For first occurence
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){  // in case element is found.
            if(mid == 0 || nums[mid-1] != target){// if only one element is present in array then mid = 0 and mid -1 will go out of bound.
                v.push_back(mid);
                flag = true;
                break;
            }
            else{ 
                high = mid - 1;
            }
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(flag == false){
        v.push_back(-1);
    }
    low = 0;
    high = nums.size()-1;
    // For last occurence;
    bool flag2 = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){  // in case element is found.
            if(mid == nums.size()-1 || nums[mid+1] != target){
                v.push_back(mid);
                flag2 = true;
                break;
            }
            else{
                low = mid + 1;
            }
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(flag2 == false){
        v.push_back(-1);
    }
    return v;  
}
int main(){
    vector<int> v = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(v,target);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}