#include<iostream>
#include<stack>
using namespace std;
void insertAtPosition(stack<int> &st , int index){
    int st_size = st.size();
    int count = 0;
    stack<int> temp;
    while(count < st_size - index-1){   // st_size - index is  number of elements to be removed or added to temp stack.
        int curr = st.top();
        st.pop();
        temp.push(curr);
        count ++;
    }
    st.pop();
    while(not temp.empty()){
        int curr1 = temp.top();
        temp.pop();
        st.push(curr1);
    }
}
void Display(stack<int> &st){
    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return;
}
int main(){
    stack<int> st;
    int idx;
    cout<<"Enter the index : ";
    cin>> idx;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtPosition(st,idx);
    Display(st);
    return 0;
}