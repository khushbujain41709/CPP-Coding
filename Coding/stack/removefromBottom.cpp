#include<iostream>
#include<stack>
using namespace std;
void RemoveFromBottom(stack<int> &st){
    stack<int> temp;
    while(st.size() != 1){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(not temp.empty()){
        int curr1 = temp.top();
        temp.pop();
        st.push(curr1);
    }
}
void Display(stack<int> res){
    while(not res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    RemoveFromBottom(st);
    Display(st);
    return 0;
}