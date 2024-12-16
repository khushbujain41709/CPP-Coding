#include<iostream>
#include<stack>
using namespace std;
int main(){    // stack should be in small letter 
    stack<int> st;   // stack of integers.
    // st.pop();   gives segmentation fault in case of underflow.
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(12);
    // we don't check overflow condition here.
    cout<<st.top()<<endl;  // built in function to see the top of stack.
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    /*
    while(st.size() > 0){
        cout<<st.top()<<" ";
        st.pop();
    }
    */
    return 0;
}