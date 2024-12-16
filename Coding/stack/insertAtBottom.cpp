// Time complexity - O(n)
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
void Display(stack<int> res){
    while(not res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }
}
int main(){
    stack<int> st;
    int num;
    cout<<"Enter the element to be added : ";
    cin>>num;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(st,num);
    Display(st);
    return 0;
}