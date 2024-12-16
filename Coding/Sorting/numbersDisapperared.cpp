// Leetcode - 448
#include<iostream>
#include<vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums){
    vector<int> v;
    int n = nums.size();
    int i = 0;
    while(i < n){
        if(nums[i] != nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);
        }
        else{
            i++;
        }
    }
    for(int i = 0;i<n;i++){
        if(nums[i] != i+1){
            v.push_back(i+1);
        }
    }
    return v;
}
int main(){
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> v2 = {1,1};
    vector<int> ans = findDisappearedNumbers(v);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}