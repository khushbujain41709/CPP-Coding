#include<iostream>
#include<vector>
using namespace std;
// This function will work only for unique elements but iterative code will work for duplicate elements also.
/*
                           {},{1,2,3} ,0(index)
                    no add/               \add
                    {},{1,2,3},1           {1},{1,2,3},1
                   /       \               /            \
            {},{1,2,3},2  {2},{1,2,3},2  {1},{1,2,3},2  {1,2},{1,2,3},2(index)
           /      |        |       |        |       |          |      \
         {}       {3}      {2}     {2,3}    {1}    {1,3}       {1,2}   {1,2,3}
                                                    we don't
                                                    want this as
                                                    {1,3} is not continuous 
                                                    i.e not a subarray

 Look at index = 2 when we are adding {1},{1,2,3},2 it gives {1} and {1,3}.
 // neww[neww.size()-1] == old[index-1] then only we push_back in our neww vector. 
 Like neww[neww.size()-1] = 1 and old[index-1] = 2 so we don't push_back {1,3}.                
*/                                                  
// Recursive Method
void subArray(vector<int> neww , vector<int>& old,int index){
    if(index == old.size()){
        for(int i = 0;i<neww.size();i++){
            cout<<neww[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subArray(neww,old,index+1);
    if(neww.size() == 0 || neww[neww.size()-1] == old[index-1]){
        neww.push_back(old[index]);
        subArray(neww,old,index+1);
    } 
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Iterative Method
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k = i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    vector<int> v = {1,2,3,4};
    subArray({},v,0);
    return 0;
}