// Leetcode - 1929
#include<iostream>
#include<vector>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
    int siz = nums.size();
    vector<int> v(2*siz);
    for(int i = 0;i<nums.size();i++){
        v[i] = nums[i];
        v[i + siz] = nums[i];
    }
    return v;
}
int main(){
    vector<int> v = {1,3,2,1};
    vector<int> v1;
    v1 = getConcatenation(v);
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}