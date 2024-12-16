// Copy the contents of the one stack to another in same order.
#include<iostream>
#include<stack>
using namespace std;
stack<int> Recurse(stack<int> st , stack<int> &result){
    if(st.empty()){
        return result;
    }
    int curr = st.top();
    st.pop();
    Recurse(st , result);
    result.push(curr);
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
    res = Recurse(st , res);
    Display(res);
    return 0;
}