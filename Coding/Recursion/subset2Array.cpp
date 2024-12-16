#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void helper(vector<int> neww , vector<int>& old , vector<vector<int>>& ans , int index , bool flag){
    if(index == old.size()){
        ans.push_back(neww);
        return;
    }
    if(old.size() == 1){
        helper(neww,old,ans,index+1,true);
        neww.push_back(old[index]);
        if(flag == true) helper(neww,old,ans,index+1,true);
        return;
    }
    if(index+1 < old.size() && old[index] == old[index+1]){   // imp line 
    // if(old[index] == old[index+1] && index+1 < old.size()){ This is incorrect and gives runtime error in leetcode as we are accessing old[index+1] without first ensuring that index + 1 is within the bounds of the old vector. 
        helper(neww,old,ans,index+1,false);
        neww.push_back(old[index]);
        if(flag == true) helper(neww,old,ans,index+1,true);
    }
    else{
        helper(neww,old,ans,index+1,true);
        neww.push_back(old[index]);
        if(flag == true) helper(neww,old,ans,index+1,true);
    }
    
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    helper({},nums,ans,0,true);
    return ans;   
}
int main(){
    vector<int> v = {1,2,2,1};
    vector<vector<int>> ans;
    ans = subsetsWithDup(v);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}