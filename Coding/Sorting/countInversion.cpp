#include<iostream>
#include<vector>
using namespace std;
void mergeSorted(vector<int>& a, vector<int>& b , vector<int>& res){
    int m = a.size();
    int n = b.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if(a[i] <= b[j]){  // equality for stability
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
int inversion(vector<int>& a,vector<int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]){
            count += a.size() - i;
            j++;
        }
        else{
            i++;
        }  
    }
    return count;
}
int mergeSort(vector<int>& v){
    int n = v.size();
    int count = 0;
    if(n == 1) return 0; // base case for recursion
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
    count += mergeSort(a);
    count += mergeSort(b);
    count += inversion(a,b);
    mergeSorted(a,b,v);
    // to improve space complexity we will delete extra array after merging
    a.clear();
    b.clear();
    return count;
}
int main(){
    vector<int> v = {5,1,3,0,4,2,6};
    cout<<mergeSort(v);
    cout<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}