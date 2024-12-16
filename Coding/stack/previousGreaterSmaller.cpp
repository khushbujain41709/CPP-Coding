// Time Complexity - O(n)
// Space Complexity - O(n)
// Can be solved using loops(brute force method) and using stacks.
// Simply reverse stack and find nge or nse.
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> pge(vector<int> &v){
    int n = v.size();
    vector<int> output(n,-1);   // intialize with -1
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
vector<int> reverse(vector<int> &v){
    for(int i = 0;i<(v.size())/2;i++){
        swap(v[i] , v[(v.size())-i-1]);
    }
    return v;
}
void Display(vector<int> v){
    for (int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v , output , finalOutput , intermediate ;
    int num;
    cout<<"Enter elements : ";
    cin>>num;
    for(int i = 0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    intermediate = reverse(v);
    cout<<"Reversed array is : ";
    Display(intermediate);
    output = pge(intermediate);
    cout<<"After using next greater element : ";
    Display(output);
    finalOutput = reverse(output);
    cout<<"Again reversing array : ";
    Display(finalOutput);
    return 0;
} 