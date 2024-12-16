// Leetcode - 151
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
string reverseWords(string s){
    stringstream ss(s);
    string temp,snew;
    int count = 0;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
        count ++;
    }
    for(int i = 0;i<count ;i++){
        snew += v[count - i -1]+" ";
    }
    snew.pop_back();
    return snew;
}
// Better method 
string reverseWords2(string s) {
    reverse(s.begin(),s.end());
    int n=s.size();
    int left=0;
    int right=0;
    int i=0;
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i==n){
            break; // to stop index going out of bounds
        }
        while(i<n && s[i]!=' '){
            s[right++]=s[i++];
        }
        reverse(s.begin()+left,s.begin()+right);
        s[right++]=' ';
        left=right;
        i++;
    }
    s.resize(right-1);
    return s;
}
int main(){
    cout<< reverseWords("  fly to   the moon");
    return 0;
}