#include<iostream>
#include<vector>
using namespace std;
// Time Complexity : O(N), because in the worst case we traverse the <= N element. Where N is the size of theArray(nums).Space Complexity : O(1), the space complexity is constant.
vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> v(2,-1);
    for(int i = 0;i<n;i++){
        if(nums[i] == target){
            v[0] = i;
            break;
        }
    }
    for(int j = n-1;j>=0;j--){
        if(nums[j] == target){
            v[1] = j;
            break;
        }
    }
    return v;
}
int main(){
    vector<int> v = {5,7,7,8,8,10};
    vector<int> ans = searchRange(v,6);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}