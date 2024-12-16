// Q - FIND THE DOUBLET IN THE ARRAY WHOSE SUM IS EQUAL TO GIVEN VALUE.
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for(int i = 0; i<nums.size()-1;i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                cout<<"("<<i<<","<<j<<")";
                result.push_back(i);
                result.push_back(j);
            }
        }
    } 
    return result;   
}
int main(){
    vector<int> v , r;
    int size , x , answer;
    cout<<"Enter size of vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the element : ";
    cin>>x;
    r = twoSum(v , x);
    cout<<endl;
    for(int i = 0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    return 0;
}