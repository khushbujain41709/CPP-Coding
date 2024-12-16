// Leet Code - Online Stcock Span - LeetCode 901
// Time Complexity - O(n)
// Space Complexity - O(n)
// Can be solved using loops(brute force method) and using stacks.
// Simply reverse stack and find nge or nse.
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>  // for reverse function
using namespace std;
vector<int> pge(vector<int> &v){
    int n = v.size();
    reverse(v.begin(),v.end());  // reverses array
    vector<int> output(n,-1);   // intialize with -1 // for first element 0 -(-1) = 1
    stack<int> st;  // stores indices
    st.push(0);  // store 0 index for initialisation
    for(int i = 1;i<n;i++){
        while(! st.empty() and v[i]>v[st.top()]){// for nse(next smaller element) replace > with < .
            output[st.top()] = n-i-1;   // we need index not value and after reversing the indices will change.
            st.pop();
        }
        st.push(i);
    }
    reverse(output.begin(),output.end());  // pge array is created
    reverse(v.begin(),v.end());  // since v is reverted so it should be reverted again as it is passed by reference.
    return output;

}
void Display(vector<int> v){
    for (int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v , output , finalOutput , stockSpan ;
    int num;
    cout<<"Enter elements : ";
    cin>>num;
    for(int i = 0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    stockSpan = pge(v);
    Display(stockSpan);
    for (int i = 0;i<stockSpan.size();i++){
        cout<<i-stockSpan[i]<<" ";
    }
    cout<<endl;
    return 0;
}