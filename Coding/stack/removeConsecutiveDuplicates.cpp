#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<char>& st , char x){
    if(st.empty()){
        st.push(x);
        return;
    }
    char p = st.top();
    st.pop();
    insertAtBottom(st , x);
    st.push(p);
    return;
}
void reverseStack(stack<char>& st){
    if(st.empty()){
        return;
    }
    char x = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st , x);
}
string removeConsecutiveDupliactes(string s){
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if((s[i] != st.top())){
            st.push(s[i]);
        }
    }
    string str = "";
    reverseStack(st);
    while(!st.empty()){
        str += st.top();
        st.pop();
    }
    return str;
}
int main(){
    string s = "aaabbcdeefaaghh";
    string str = removeConsecutiveDupliactes(s);
    cout<<str<<endl;
    return 0;
}