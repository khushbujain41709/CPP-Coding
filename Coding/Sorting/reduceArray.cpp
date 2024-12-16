// Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. The order of elements is the same, i.e., 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, … N-1 is placed for the largest element.
// In case of negative elements in an array... make a special array named isVisited.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Valid for negative numbers also
// Time Complexity = O(n^2)
// Space Complexity = O(n)
vector<int> arrayRankTransform(vector<int>& arr){
    int n = arr.size();
    vector<int> Special(n,0);  // 0 if not visited
    int x = 1;
    for(int  i = 0;i<n;i++){
        int minIndex = -1;
        int minValue = INT_MAX;
        for(int j = 0;j<n;j++){
            if(Special[j] == 1){
                continue;
            }
            else{
                if(minValue>arr[j]){
                    minValue = arr[j];
                    minIndex = j;
                }
            } 
        }
        arr[minIndex] = x;
        x++;
        Special[minIndex] = 1; // visited
    }
    return arr;
}
// In case of positive numbers only or negative numbers only or if numbers is given in some certain range.
vector<int> arrayRankTransform2(vector<int>& arr){
    int n = arr.size();
    int x = 0;
    for(int  i = 0;i<n;i++){
        int minIndex = -1;
        int minValue = INT_MAX;
        for(int j = 0;j<n;j++){
            if(arr[j] <= 0){
                continue;
            }
            else{
                if(minValue>arr[j]){
                    minValue = arr[j];
                    minIndex = j;
                }
            } 
        }
        arr[minIndex] = -x;  // concept of negative marking
        x++;
    }
    return arr;  // multiply by negative in output...
}
int main(){
    vector<int> v = {19,23,8,12,32};
    vector<int> ans = arrayRankTransform(v);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}