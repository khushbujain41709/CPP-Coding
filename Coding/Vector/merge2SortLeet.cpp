// Leetcode 88 
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &nums1 ,int m , vector<int>& nums2 , int n ){
    int i = m-1;
    int j = n-1;
    int k = (m+n) -1;
    nums1.resize(m+n);
    while(i>=0 && j>=0){
        if(nums1[i] < nums2[j]){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        else{
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        if(i<0){
            while(j>=0){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        if(j<0){
            while(i>=0){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
    }
    if(i<0){
        while(j>=0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    if(j<0){
            while(i>=0){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
    return ;
}
int main(){
    int size1,size2;
    vector<int> v , v1;
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
    merge(v,size1,v1,size2);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}