// Leetcode - 20
// )( is a unbalanced bracket sequence.
// If we concatenate 2 strings which are balanced then results will be balanced.
// If we wrap a balanced string with a pair of brackets then results is also balanced.
// Time Complexity(Worst) - O(n)
// Space Complexity(Worst) - O(n)
#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    // 1 for balanced bracket
    // 0 for unbalanced bracket
    stack<char> st;
    for(int i = 0 ;i<s.size();i++){
        if(s[i] == '(' or s[i] == '{' or s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(s[i] == ')' and !st.empty() and st.top() == '(' ){
                st.pop();
            }
            else if(s[i] == '}' and !st.empty() and st.top() == '{' ){
                st.pop();
            }
            else if(s[i] == ']' and !st.empty() and st.top() == '[' ){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s = "(){}{}[()]";
    cout<<isBalanced(s)<<endl;

    string s1 = "(){((}}[()]";
    cout<<isBalanced(s1)<<endl;
    return 0;
}
