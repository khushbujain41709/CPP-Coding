// Leetcode - 39
#include<iostream>
#include<vector>
using namespace std;
/*
                           {},  {2,3,5} ,  8(target)
                         2/            |3            \5(need to pop_back vector as 2 and 3 is added earlier)
               {2},{2,3,5}, 6      {3}, {2,3,5} , 5       {5} , {2,3,5} , 3
              2/    3|    \5      2/!    |3    5\        2/!       3|!      \5
        {2,2},4 {2,3},3 {2,5},1 {3,2},3 {3,3},2 {3,5},0  {5,2},1 {5,3},0 {5,5},-2
        so on.....
        return if target is less than -1 as this is wrong combination.
        print when target == 0.
        ! - avoid these calls as they are causing repetition.                                         
*/
void combinationSum1(vector<int> v , vector<int>& candidates , int target ,int index){
    if(target == 0){
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target < 0){
        return;
    }
    for(int i = index;i<candidates.size();i++){ // start i with index
        v.push_back(candidates[i]);
        combinationSum1(v,candidates,target - candidates[i] , i); 
        v.pop_back();  // see line 2
    }
}
// For Leetcode -------------------------------------------------------------------------------------
void combination(vector<int> v , vector<int>& candidates , int target ,int index,vector<vector<int>>& vec){
    if(target == 0){
        vec.push_back(v);
        return;
    }
    if(target < 0){
        return;
    }
    for(int i = index;i<candidates.size();i++){ // start i with index
        v.push_back(candidates[i]);
        combination(v,candidates,target - candidates[i] , i,vec); 
        v.pop_back();  // see line 2
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates,int target){
    vector<vector<int>> ans;
    combination({},candidates,target,0,ans);
    return ans;
}
int main(){
    vector<int> vec = {2,3,5};
    vector<int> v;
    int target = 8;
    combinationSum1(v,vec,target,0);

    vector<vector<int>> ans = combinationSum(vec,target);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}