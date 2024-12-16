//Given two strings s and t , returns true if t is an anagram of s , otherwise returns false.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Leetcode - 242
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<s<<" "<<t<<endl;
    bool y = isAnagram(s,t);
    cout<<y<<endl;
    return 0;
}