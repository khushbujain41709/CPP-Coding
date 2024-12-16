// REVERSE ELEMENTS OF A STACK IN THE SAME GIVEN STACK.
// Time complexity - O(n)
// Space complexity - O(n)
#include<iostream>
#include<stack>
using namespace std;
stack<int> ReverseStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int tempo = input.top();
        input.pop();
        temp.push(tempo);
    }
    stack<int> temp1;
    while(not temp.empty()){
        int tempo = temp.top();
        temp.pop();
        temp1.push(tempo);
    }
    while(not temp1.empty()){
        int tempor = temp1.top();
        temp1.pop();
        input.push(tempor);
    }
    return input;
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
    st.push(5);
    ReverseStack(st);
    Display(st);
    return 0;
} 