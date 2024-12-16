// Leetcode  - 852
#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr){
    int n = arr.size();
    // imp  - as extremes are not peak so starting with index 1 to n-2.Starting from 0 to n-1 gives error.
    int low = 1;
    int high = n-2;
    while(low <= high){
        int mid = low + (high -  low)/2;
        if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1]){
            return mid;
        }
        else if(arr[mid] > arr[mid + 1]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {0,1,5,2};
    cout<<peakIndexInMountainArray(v);
    return 0;
}
