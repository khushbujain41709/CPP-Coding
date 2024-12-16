// Leetcode 88 
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &nums1 ,vector<int>& nums2){
    int m = nums1.size();
    int n = nums2.size();
    vector<int> res(m+n);  // give size ... this is imp
    int k = 0;
    int i = 0;
    int j = 0;
    while(i<m && j<n){
        if(nums1[i] > nums2[j]){
            res[k] = nums2[j];
            j++;
            k++;
        }
        else if(nums1[i] < nums2[j]){
            res[k] = nums1[i];
            i++;
            k++;
        }
    }
    // for remaining elements if nums1[i] or nums2[j] goes out of bound...
    if(i == m){
        while(j<n){
            res[k] = nums2[j];
            k++;
            j++;
        }
    }
    else if(j == n){
        while(i<m){
            res[k] = nums1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    int size1,size2;
    vector<int> v , v1 , res;
    cout<<"Enter number of elements in vector 1 : ";
    cin>>size1;
    for(int i = 0;i<size1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter number of elements in vector 2 : ";
    cin>>size2;
    for(int i = 0;i<size2;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Merged Array is : ";
    res = merge(v,v1);
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}