// Leetcode - 169
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    return nums[n/2];
}
int main(){
    vector<int> v = {3,2,3};
    cout<<majorityElement(v)<<endl;    

    vector<int> vec = {2,4,4,1,5,4,4,4};
    cout<<majorityElement(vec);
    return 0;
}