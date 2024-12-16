// Leetcode - 78
// Number of subsets - 2^n

// Print and store all subsets of a string and array
// 1) passing "" | "abc" then two calls will be there.
// 2) "a" | "bc" , "" | "bc" where in one a is omitted and in one a is added to string.
// 3) Similarly these sbove two combinations again do same in which one is omitted and other is appended in string .
// 4) Now , "a" | "bc" becomes "ab" | "c" , "a" | "c" and "" | "bc" becomes "b" | "c" , "" | "c".
// 5) Now , "ab" | "c" becomes "abc" | "" , "ab" | "" and  "a" | "c" becomes "ac" | "" , "a" | "" and "b" | "c" becomes "bc" | "" , "b" | "" and "" | "c" becomes "c" | "" , "" | "".
// 6) This process ends when original string abc becomes empty in each case.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
// cout<<"-------------------------------------------------------------------------------"<<endl;
void subsetsString(string original,string empty){
    if(original == ""){
        cout<<empty<<endl;
        return ;
    }
    subsetsString(original.substr(1),empty);
    subsetsString(original.substr(1),empty+original[0]);
}
// cout<<"-------------------------------------------------------------------------------"<<endl;
void subsetsString2(string original,string empty,vector<string>& v){
    if(original == ""){
        v.push_back(empty);
        return;
    }
    subsetsString2(original.substr(1),empty,v);
    subsetsString2(original.substr(1),empty+original[0],v);
}
// cout<<"-------------------------------------------------------------------------------"<<endl;
// Array subset
void subsetArray(int arr[], int n , int idx , vector<int> v){  // don't pass by reference as we want to create a new vector everytime.
    if(idx == n){
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsetArray(arr,n,idx+1,v);
    // subsetArray(arr,n,idx+1,v.push_back(idx));  This is wrong...
    v.push_back(arr[idx]);
    subsetArray(arr,n,idx+1,v);
}
// cout<<"-------------------------------------------------------------------------------"<<endl;
void helper(vector<int> news , vector<int>& old , int index , vector<vector<int>>& ans){
    if(index == old.size()){
        ans.push_back(news);  // no & in news as we want to create a new vector everytime . We don't want to push_back in same vector.
        return;
    }
    helper(news,old,index+1,ans);
    news.push_back(old[index]);
    helper(news,old,index+1,ans);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    helper({},nums,0,ans);
    return ans;
}
// cout<<"-------------------------------------------------------------------------------"<<endl;
int main(){
    string s = "abc";
    string str = "abcd";
    subsetsString(s , "");

    vector<string> ss;
    subsetsString2(str,"",ss);
    for(int i = 0;i<ss.size();i++){
        cout<<ss[i]<<endl;
    }

    int arr[3] = {1,3,4};
    vector<int> vec;
    subsetArray(arr , 3 , 0 , vec);
    
    cout<<endl;
    vector<int> v = {1,2,3};
    vector<vector<int>> v1 = subsets(v);
    for(int i = 0;i<v1.size();i++){
        for(int j = 0;j<v1[i].size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}