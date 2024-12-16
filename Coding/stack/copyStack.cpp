// Copy the contents of the one stack to another in same order.
// It is the property of the stack that whenever we transfer data from one stack to other it gets reversed.
// So here we use a temporary stack . Original_stack -> temporary stack -> resultant stack.
// Time complexity - O(n)
// Space complexity - O(n)
#include<iostream>
#include<stack>
using namespace std;
stack<int> CopyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
    int tempo = input.top();
    input.pop();
    temp.push(tempo);
    }
    stack<int> result;
    while(not temp.empty()){
    int tempo = temp.top();
    temp.pop();
    result.push(tempo);
    }
    return result;
}
void Display(stack<int> res){
    while(not res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }
}
int main(){
    stack<int> st;
    stack<int> res;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    res = CopyStack(st);
    Display(res);
    return 0;
}