// Leetcode - 2496
#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
bool isAlpha(string s){
    bool found = false;
    for(int i = 0;i<s.length();i++){
        if(isalpha(s[i])){    // checks character if alphabetic
            found = true;
            break;
        }
    }
    return found;
}
int maximumValue(vector<string>& strs) {
    int maxx = 0;
    for(int i = 0;i<strs.size();i++){
        int x = 0;
        if(isAlpha(strs[i])){
            x  = strs[i].length();
        }
        else {
            x = stoi(strs[i]);
        }
        if(x>maxx){
            maxx = x;
        }
    }
    return maxx;
}
int main(){
    vector<string> str = {"0123","0023","456","001821","940","02901"};
    vector<string> str1 = {"alic3","bob","3","4","00000"};
    int answer = maximumValue(str1);
    cout<<answer<<endl;
    // To preserve leading zeros
    /*
    int maxx = stoi(str[0]);
    string maxS = str[0];
    for(int i = 0;i<str.size();i++){
        int x = stoi(str[i]);
        if(x>maxx){
            maxx = x;
            maxS = str[i];
        }
    }
    cout<<maxx<<" "<<maxS<<endl;
    return 0;
    */
}