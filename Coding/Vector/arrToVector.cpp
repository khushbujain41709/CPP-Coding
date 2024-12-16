#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);  // imp syntax
    vector<int> v(arr,arr+n);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}