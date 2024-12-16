// Leetcode - 658
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Time Complexity = O(logn + klogk)
// Space Complexity = O(k)
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> v(k);
    // if element is not present but it is out of range
    if(x < arr[0]){
        for(int i = 0;i<k;i++){
            v[i] = arr[i];
        }
        return v;
    }
    if(x > arr[n-1]){
        // This will insert values in reverse order in array so use while loop
        // for(int i = n-1;i<=n-k;i--){  
        //     v[i] = arr[i];
        // }
        // return v;
        int i = n-1;
        int j = k-1;
        while(j >= 0){
            v[j] = arr[i];
            j--;
            i--;
        }
        return v;
    }
    // searching element if present or not
    int low = 0;
    int high = n-1;
    bool flag = false;
    int t = 0;
    int mid = -1;
    while(low <= high){
        mid = low + (high-low)/2;
        if(arr[mid] == x){
            flag = true;
            v[t] = arr[mid];  // append element itself as it is closest to itself
            t++;
            break;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    // finding upper and lower bound in both cases
    int lower_bound = high;
    int upper_bound = low;
    if(flag == true){
        lower_bound = mid - 1;
        upper_bound = mid + 1;
    }
    while(t<k && lower_bound >= 0 && upper_bound <= n-1){
        int d2 = abs(x - arr[upper_bound]);
        int d1 = abs(x - arr[lower_bound]);
        if(d1 <= d2){
            v[t] = arr[lower_bound];
            t++;
            lower_bound --;
        }
        else{
            v[t] = arr[upper_bound];
            t++;
            upper_bound ++;
        }
    }
    if(lower_bound < 0){
        while(t<k){
            v[t] = arr[upper_bound];
            upper_bound++;
            t++;
        }
    }
    if(upper_bound > n-1){
        while(t<k){
            v[t] = arr[lower_bound];
            lower_bound--;
            t++;
        }
    }
    // now sort array
    sort(v.begin(),v.end());
    return v;   
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int x = 3;
    int k = 3;
    vector<int> ans = findClosestElements(arr,k,x);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}