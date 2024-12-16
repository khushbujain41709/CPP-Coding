// Leetcode 75  - Sort Colours
// Using Dutch Flag Algorithm - Method 2
// sort an array of 0s , 1s and 2s without using vector sort function
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){    // Method 1
    int nzero = 0;  // count of number of zeros
    int none = 0;   // count of number of ones
    int ntwo = 0;   // count of number of twos
    for(int i = 0;i<v.size();i++){
        if(v[i] == 0){
            nzero ++;
        }
        else if(v[i] == 1){
            none ++;
        }
        else{
            ntwo ++;
        }
    }
    for(int i = 0;i<v.size();i++){
        if(i<=nzero-1){
            v[i] = 0;
        }
        else if(i>nzero-1 and i<(none+nzero)){
            v[i] = 1;
        }
        else{
            v[i] = 2;
        }
    }
    return;
}
void sortTwoPointer(vector<int> &nums){   
    // Method 2 - Three pointer algorithm
    // mid k baare m socho
    // 0 - 0 to low-1
    // 2 - high+1 - nums.size()-1
    // 1 - low to mid-1
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid<=high){
        if(nums[mid] == 2){
            // swap(high,mid)
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if(nums[mid] == 0){
            // swap(low,mid)
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++; // imp step
        }
        else{
            mid++;
        }
    }
    return;
}
int main(){
    int size;
    vector<int> v;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortTwoPointer(v);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

