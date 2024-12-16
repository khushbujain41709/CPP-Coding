// REVERSE ELEMENTS OF A STACK IN THE SAME GIVEN STACK.
// Time complexity - O(n^2)
// Space complexity - O(n)
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st , int num){
    stack<int> temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(num);
    while(not temp.empty()){
        int curr1 = temp.top();
        temp.pop();
        st.push(curr1);
    }
}
void ReverseStackRecurse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    ReverseStackRecurse(st);
    insertAtBottom(st,curr);
}
void Display(stack<int> &res){
    while(not res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }
}
void DisplayRecurse2(stack<int> &st){   
    // Time complexity - O(n)
    // Space complexity - O(n)
    if(st.empty()){
        return;
    }
    int curr = st.top();
    cout<<curr<<endl;
    st.pop();
    DisplayRecurse2(st);
    st.push(curr);
}
void ReverseDisplayRecurse2(stack<int> &st){   
    // Time complexity - O(n)
    // Space complexity - O(n)
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    ReverseDisplayRecurse2(st);
    cout<<curr<<endl;
    st.push(curr);  // STACK ORDER WILL BE AS ORIGINAL STACK. 
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"This is original stack!"<<endl;
    DisplayRecurse2(st);
    cout<<endl;
    ReverseDisplayRecurse2(st);
    cout<<endl;
    ReverseStackRecurse(st);
    Display(st);
    return 0;
}