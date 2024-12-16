#include<iostream>
#include<vector>
#include<algorithm>   // to use sort function
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);  
    v.push_back(92);   
    v.push_back(322);   
    v.push_back(4);
    v.at(3) = 90;
    cout<<v.at(2)<<endl;   // prints element at 2nd index
    cout<<v.at(3)<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
    // sort
    sort(v.begin(),v.end());  // O(nlogn) = Time Complexity
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}