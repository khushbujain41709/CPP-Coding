//  If target = v.size() then array is same after rotation.
//  If target > v.size() use modulus operator that is target = target modulus v.size()
#include<iostream>
#include<vector>
using namespace std;
vector<int> reversePart(vector<int> &v , int i,int j){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return v;
}
vector<int> reverse(vector<int> &v){
    for(int i = 0 ,j = v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    return v;
}
vector<int> rotate(vector<int> &nums , int target){
    if(target>nums.size()){
        target = target % nums.size();
    }
    reversePart(nums,nums.size()-target,nums.size()-1);
    reversePart(nums,0,nums.size()-target-1);
    reverse(nums);
    return nums;
}
int main(){
    int size , k;
    vector<int> v , res;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter number : ";
    cin>>k;
    res = rotate(v,k);
    for(int i = 0;i<size;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}