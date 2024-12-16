// Quick select
// Finds kth smallest element in O(n) time complexity(avg case) but worst case O(n^2)
// Using quicksort find kth smallest element in an array
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v, int starting_index , int ending_index){
    int n = v.size();
    int count = 0;
    int pivot_element = v[(starting_index + ending_index)/2];
    for(int i = starting_index;i<= ending_index;i++){ // starting_index + 1 as this displaces pivot_element to one extra place ahead.
        if(i == (starting_index + ending_index)/2) continue;
        if(v[i] <= pivot_element){
            count ++;
        }
    }
    int pivot_index = count + starting_index;
    swap(v[pivot_index] , v[(starting_index + ending_index) / 2]);
    int i = starting_index;
    int j = ending_index;
    while(i < pivot_index && j > pivot_index){
        if(v[i] <= v[pivot_index]){
            i++;
        }
        if(v[j] > v[pivot_index]){
            j--;
        }
        else if(v[i] > v[pivot_index] && v[j] <= v[pivot_index]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivot_index;
}
int kthSmallest(vector<int>& v, int starting_index , int ending_index,int k){
    if(starting_index > ending_index) return -1;
    int pivot_index = partition(v,starting_index,ending_index);
    if(pivot_index + 1 == k) return v[pivot_index];
    else if(pivot_index + 1 < k) return kthSmallest(v,pivot_index + 1 , ending_index , k);
    else return kthSmallest(v,starting_index,pivot_index -1, k);
}
int main(){
    vector<int> v = {5,1,8,2,7,6,3,4,-8};
    int n = v.size();
    int k = 1;
    cout<<kthSmallest(v,0,n-1,k);
    return 0;
}