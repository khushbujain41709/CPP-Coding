// Leetcode - 205
/*\
1)Given two strings s and t, determine if they are isomorphic.
2)Two strings s and t are isomorphic if the characters in s can be replaced to get t.
3)All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
4)example - egg & add , 121a & aAa9
*/
// Steps to do question
/*
1) Make a special array
2) cout<<'t'-'p' gives integer that is ascii value of t minus ascill value of p.
3) stores t - p at index of t
4) let s = badc and t = baba , from s pov they are isomorphic but from t pov they are non isomorphic so check from wrt s and t both
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    vector<int> v(150,1000);  // let us make 150 size array bcoz it includes all charcter be it capital or small letters and initialize it with 1000 bcoz difference of ascii is never 1000 so replace 1000 with difference.
    for(int i = 0;i<s.length();i++){
        int index = (int)s[i];
        if(v[index] == 1000){   // when that position is initailly new without and ascii difference that is character s[i] is occuring first time
            v[index] = s[i] - t[i];// difference of character directly converts to integer.
        }
        else if(v[index] != s[i]-t[i]){  // character s[i] is not occuring first time
            return false;
        }
    }
    // now emptying the vector and reseting it with 1000 so as to check wrt to t.
    for(int i = 0;i<150;i++){
        v[i] = 1000;
    }
    // checking wrt to t.
    for(int i = 0;i<t.length();i++){
        int index = (int)t[i];
        if(v[index] == 1000){   // when that position is initailly new without and ascii difference that is character s[i] is occuring first time
            v[index] = t[i] - s[i];// difference of character directly converts to integer.
        }
        else if(v[index] != t[i]-s[i]){  // character s[i] is not occuring first time
            return false;
        }
    }
    return true;
}
int main(){
    string s = "badc";
    string t = "baba";
    cout<<isIsomorphic(s,t)<<endl;
    string s1 = "egg";
    string t1 = "add";
    cout<<isIsomorphic(s1,t1)<<endl;
    return 0;
}