// Leetcode - 84 -> Largest Rectangle in Histogram
// Time Complexity - O(n)
// Space Complexity - O(n)
#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
int largestAreaRectangle(vector<int> &v){
    int n = v.size();
    stack<int> st;  // stores indices
    int ans = INT_MIN;
    st.push(0);  // store 0 index for initialisation
    for(int i = 1;i<n;i++){
        while(! st.empty() and v[i]<v[st.top()]){
        int element = v[st.top()];
        st.pop();
        int nsi = i;
        int psi = (st.empty())?(-1):st.top();
        ans = max(ans , element*(nsi-psi-1));
        }
        st.push(i);
    }
        while(not st.empty()){ // indices which are left in stack
        int element = v[st.top()];
        st.pop();  
        int nsi = n;// 2 1 5 6 2 3  like this ending 2 has no nsi so take nsi = n(length of array)
        int psi = (st.empty())?(-1):st.top();
        ans = max(ans , element*(nsi-psi-1));
        }
    return ans;
}
int main(){
    vector<int> v;
    int num , answer;
    cout<<"Enter no. of elements : ";
    cin>>num;
    for(int i = 0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    answer = largestAreaRectangle(v);
    cout<<answer;
    return 0;
}