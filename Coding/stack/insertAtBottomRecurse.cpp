// Time complexity - O(n)
// Space complexity - O(n)
#include<iostream>
#include<stack>
using namespace std;
void Recurse(stack<int> &st, int num){
    if(st.empty()){
        st.push(num);
        return ;
    }
    int curr = st.top();
    st.pop();
    Recurse(st , num);
    st.push(curr);
    return ;
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
    Recurse(st , num);
    Display(st);
    return 0;
}