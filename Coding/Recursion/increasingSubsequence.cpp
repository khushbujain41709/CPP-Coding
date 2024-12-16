// Question - Print all the increasing sequences of length k from first n natural numbers.
// Subarray is a continuous part of array.
// Example : n = 5 and k = 3 so subarray - 123 , 345 , 234
// subset - 1 , 2 , 3 , 12 , 23 , 13 , 123
// subsequence - 123 , 345 , 234 , 135 , 124 , 245 , 125 , 235 , 145 , 134.
// aTo solve this question we can use TAKE IT OR LEAVE IT.
#include<iostream>
#include<vector>
using namespace std;
void subsetArray(int arr[], int n , int idx , vector<int> v , int k){  // don't pass by reference as we want to create a new vector everytime.
    if(idx == n){
        if(v.size() == k){
            for(int i = 0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(v.size() + (n-idx) < k) return ; // Time complexity better ho jayegi.
    subsetArray(arr,n,idx+1,v,k);
    // subsetArray(arr,n,idx+1,v.push_back(idx));  This is wrong...
    v.push_back(arr[idx]);
    subsetArray(arr,n,idx+1,v,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    vector<int> vec;
    int k = 3;
    subsetArray(arr , 5 , 0 , vec, k);
    return 0;
}