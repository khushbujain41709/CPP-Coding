// Push zero at end while maintaining the relative order of the elements
#include<iostream>
#include<vector>
using namespace std;
void pushZero(vector<int>& nums){
    int n = nums.size();
    for(int i = 0;i<n-1;i++){
        bool flag = false;
        for(int j = 0;j<n-i-1;j++){
            if(nums[j] == 0){
                swap(nums[j],nums[j+1]);
                flag = true;
            }
        }
        if(flag == false) break;
    }
    return;
}
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};
int main(){
    vector<int> v = {5,0,3,1,0,0,2,0,4,0};
    pushZero(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}