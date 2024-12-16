// Leetcode - 84 -> Largest Rectangle in Histogram
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> nse(vector<int> &v){
    int n = v.size();
    vector<int> output(n,-1);   // intialize with -1
    stack<int> st;  // stores indices
    st.push(0);  // store 0 index for initialisation
    for(int i = 1;i<n;i++){
        while(! st.empty() and v[i]<v[st.top()]){     
            output[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return output;
}
vector<int> pse(vector<int> &v){
    int n = v.size();
    reverse(v.begin(),v.end());  // reverses array
    vector<int> output(n,-1);   // intialize with -1 // for first element 0 -(-1) = 1
    stack<int> st;  // stores indices
    st.push(0);  // store 0 index for initialisation
    for(int i = 1;i<n;i++){
        while(! st.empty() and v[i]<v[st.top()]){// for nse(next smaller element) replace > with < .
            output[st.top()] = n-i-1;   // we need index not value and after reversing the indices will change.
            st.pop();
        }
        st.push(i);
    }
    reverse(output.begin(),output.end());  // pge array is created
    reverse(v.begin(),v.end());  // since v is reverted so it should be reverted again as it is passed by reference.
    return output;
}
int main(){
    vector<int> v ,nseA,pseA;
    int num ;
    cout<<"Enter no. of elements : ";
    cin>>num;
    for(int i = 0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int maxArea = 0, area ;
    pseA = pse(v);
    nseA = nse(v);
    for (int i = 0;i<v.size();i++){
            area = v[i]*(nseA[i]-pseA[i]-1);
            maxArea = max(maxArea , area);  
    }
    cout<<maxArea;
    return 0;
}