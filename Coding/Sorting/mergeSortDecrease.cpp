#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void mergeSorted(vector<int>& a, vector<int>& b , vector<int>& res){
    int m = a.size();
    int n = b.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if(a[i] >= b[j]){  // equality for stability and change in sign for decreasing array.
            res[k] = a[i];
            i++;
            k++;
        }
        else{
            res[k] = b[j];
            j++;
            k++;
        }
    }
    if( i == m){
        while(j<n){
            res[k] = b[j];
            k++;
            j++;
        }
    }
    else if( j == n){
        while(i<m){
            res[k] = a[i];
            k++;
            i++;
        }
    }
    return;
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n == 1) return ; // base case for recursion
    // divide and conquer algorithm - dividing array into two parts
    int n1 = n/2;
    int n2 = n - n/2;
    // making two vectors
    vector<int> a(n1),b(n2);
    // filling this array
    for(int i = 0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i = 0;i<n2;i++){
        b[i] = v[i+n1];  // imp
    }
    // recursion
    mergeSort(a);
    mergeSort(b);
    mergeSorted(a,b,v);
    // to improve space complexity we will delete extra array after merging
    a.clear();
    b.clear();
    return;
}
int main(){
    vector<int> v = {7,0,9,-1,6,3,5};
    mergeSort(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}