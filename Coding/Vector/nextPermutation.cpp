// Leetcode - 31
// Find pivot element index - first smaller element index from last. Let it be i.
// Reverse the elements having index more than pivot index
// find just(just is imp) greater number's index in i + 1 to end.
// now swap(i,g_idx)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums){
    int index = -1 ;
    for(int i = nums.size()-2;i>=0;i--){  //starts from last second element
        if(nums[i]<nums[i+1]){            //want first smaller element index from last
            index = i;
            break;
        }
    }
    if(index == -1){   // if array is already greatest
        reverse(nums.begin() , nums.end());
        return;
    }
    reverse(nums.begin()+index+1,nums.begin()+nums.size());
    // reverse(v.begin()+i,v.begin()+j+1)  -> reverses from i to j
    //finding just greater element index
    int g_idx = -1;
    for(int i = index+1;i<nums.size();i++){
        if(nums[i] > nums[index]){
            g_idx=i;
            break;
        }
    }
    // Now swapping just greater element index,index
    int temp = nums[index];
    nums[index] = nums[g_idx];
    nums[g_idx] = temp;
    return;
}
int main(){
    int size;
    vector<int> v;
    cout<<"Enter size of array : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    nextPermutation(v);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}