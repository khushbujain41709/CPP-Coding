// Leetcode - 14
// we need to compare first and last vector element after sorting as any string in between first and last must have same prefix.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());  // lexographically
    int n = strs.size();
    if(n == 1){
        return strs[0];
    }
    string first = strs[0];
    string last = strs[n-1];
    string s = "";
    for(int i = 0;i<min(first.size(),last.size());i++){
        if(first[i] == last[i]){
            s += first[i];
        }
        else{
            return s;
        }
    }
    return s;
}
int main(){
    vector<string> v = {"flower","flow","flight"};
    string s = longestCommonPrefix(v);
    cout<<s<<endl;
    return 0;
}