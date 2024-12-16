// Leetcode - 22
// At every index , number of opening bracket >= number of closing bracket.
/*
                    ""(string) , 0(opening bracket) , 0(closing bracket) , 3(n)
                   ( /                                                         \ )
                "(" , 1 , 0 , 3                                             Not a correct step
               ( /              \ )
            "((" , 2 , 0 , 3     "()", 1 , 1 , 3
            ( /             \ )   ( /           \ )
        "(((",3,0,3  "(()",2,1,3   "()(",2,1,3   Not a correct step
and so on......
// Closing call is not done when opening call and closing call is equal , so for closing calls just check if opening call > closing call then apply closing call.
// Opening call is always applied but when opening call is equal to n then no opening call is there.
// If opening call = closing call = n then print the string.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void generate(string s, int open , int close , int n , vector<string>& v){
    if(open == n && close == n){
        v.push_back(s);
        return;
    }
    if(open < n){
        generate(s+'(',open + 1,close,n,v);
    }
    if(close < open){
        generate(s+')',open,close + 1,n,v);
    }
}
vector<string> generateParenthesis(int n){
    vector<string> v;
    generate("",0,0,n,v);
    return v; 
}
int main(){
    vector<string> v;
    v = generateParenthesis(3);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}