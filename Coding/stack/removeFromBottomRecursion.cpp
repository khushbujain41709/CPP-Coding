#include<iostream>
#include<stack>
using namespace std;
void RemoveFromBottomRecursion(stack<int> &st){
    if(st.size() == 1){
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    RemoveFromBottomRecursion(st);
    st.push(curr);
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
    RemoveFromBottomRecursion(st);
    Display(st);
    return 0;
}