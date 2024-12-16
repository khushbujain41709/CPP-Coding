// Check if an array can be partitioned into 2 continuous(or continguous) array of equal sum.
// sum 0 to x == x+1 to n-1 (index)
// pre[x]  = pre[n-1] - pre[x+1-1]
// 2*pre[x] = pre[n-1]
#include<iostream>
#include<vector>
using namespace std;
int PartitionSum(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1;i<n;i++){
        nums[i] = nums[i-1] + nums[i];
    }
    for(int i = 0;i<n;i++){
        if(2*nums[i] == nums[n-1]){
            return i;
        }
    }
}
int main(){
    vector<int> v = {1,2,4,5,2};
    cout<<PartitionSum(v); 
    return 0;
}