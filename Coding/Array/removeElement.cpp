// Leetcode - 27
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeElement(vector<int>& nums, int val){
    sort(nums.begin(),nums.end());
    int count = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]!= val){
            nums[count] = nums[i];
            count++;
        }
        else{
            continue;
        }
    }
    return count;
}
int main(){
    vector<int> v = {0,1,2,2,3,0,4,2};
    cout<<removeElement(v,2)<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}