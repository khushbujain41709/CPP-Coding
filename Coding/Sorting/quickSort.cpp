// Time complexity = O(n logn) at average case
// Space complexity = O(log n) so it is an in-place sorting
/*
Average Case Time Complexity: O(nlogn)
Best Case Time Complexity: O(nlogn)
Worst Case Time Complexity: O(n^2)
Space Complexity (Best and Average Cases): O(logn)
Space Complexity (Worst Case): O(n)
*/
// In built sort uses quick sort so time complexity of in built sort is O(n logn)

// Steps - 
//  Shift the pivot to the right place that is at pivot index for this just find the number of smaller elements than the first element.Pivot is the first element of the array.So pivot = count + starting index.
// Then swap element around pivot such as elements before pivot are smaller but elements after pivot are bigger than pivot . 
// Now use recursion to both array seperated by pivot.

// Applications of quick sort 
// 1) Internal sorting uses variation of quick sort
// 2) Quick select
// 3) Whenever there is no need of stability , we use quick sort

// we can choose pivot element as v(starting_index + ending_index)/2 instead of starting index but int pivot_index = count + starting_index; remains same.
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v, int starting_index , int ending_index){
    int n = v.size();
    int count = 0;
    for(int i = starting_index + 1;i<= ending_index;i++){ // starting_index + 1 as this displaces pivot_element to one extra place ahead.
        if(i == starting_index) continue;
        if(v[i] <= v[starting_index]){
            count ++;
        }
    }
    int pivot_index = count + starting_index;
    swap(v[starting_index],v[pivot_index]);
    int i = starting_index;
    int j = ending_index;
    while(i < pivot_index && j > pivot_index){
        if(v[i] <= v[pivot_index]){
            i++;
        }
        if(v[j] > v[pivot_index]){
            j--;
        }
        else if(v[i] > v[pivot_index] && v[j] < v[pivot_index]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivot_index;
}
void quickSort(vector<int>& v, int starting_index , int ending_index){
    if(starting_index >= ending_index) return;
    int pivot_index = partition(v,starting_index,ending_index);
    quickSort(v,starting_index,pivot_index -1);
    quickSort(v,pivot_index + 1 , ending_index);
}
int main(){
    vector<int> v = {5,1,8,2,7,6,3,4,-8};
    int n = v.size();
    quickSort(v,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<v[i] <<" ";
    }
    return 0;
} 