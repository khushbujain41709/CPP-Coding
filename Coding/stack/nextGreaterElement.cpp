// Time Complexity - O(n)
// Space Complexity - O(n)
// Can be solved using loops(brute force method) and using stacks(pop , answer , push).
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge(vector<int> &v){
    int n = v.size();
    vector<int> output(n , -1);   // intialize with -1
    stack<int> st;  // stores indices
    st.push(0);  // store 0 index for initialisation
    for(int i = 1;i<n;i++){
        while(! st.empty() and v[i]>v[st.top()]){     
            // for nse(next smaller element) replace > with < .
            output[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}
vector<int> nge2(vector<int> &v){
    int n = v.size();
    vector<int> output(n , -1);   // intialize with -1
    stack<int> st;  // stores indices
    st.push(v[n-1]);  // store 0 index for initialisation
    for(int i = n-2 ; i>= 0 ;i++){
        while(v[i]>st.top()){     
            st.pop();
        }
        output[i] = st.top();
            st.push(v[i]);
    }
    return output;
}
int main(){
    vector<int> v , output;
    int num;
    cout<<"Enter elements : ";
    cin>>num;
    for(int i = 0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    output = nge(v);
    for(int i = 0;i<num;i++){
        cout<<output[i]<<" ";
    }
    return 0;
}