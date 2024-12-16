// Given an array containing and integers the task is so find an integer sake such that after replacing each and every index of the array by a - k mod where I will ask you one to result in a sorted area if no such interior exist that satisfy the above condition then return -1.Find range of k.
// a1  a2   a3 - |k-a1|   |k-a2|   |k-a3|
// Now |k-a2| >= |k-a1| && |k-a3| >= |k-a2|
// So generalising this ... |k-am| >= |k-am-1|  now sqauaring and using a^2 - b^2 property which is (a-b)(a+b)
// (2k -(am + am-1))(am-1 - am) >= 0
// Now two cases arise, am-1 - am >= 0 then k >= (am + am-1)/2 and if am-1 - am < 0 then k < (am + am-1)/2
// kmin = max( kmin , (a[i] + a[i-1])/2 )
// kmax = min( kmax , (a[i] + a[i-1])/2 )  
// 5 3 7 :  5-3 >= 0 so  kmin = 4 now  3-7 < 0 so kmax = 3+7/2 = 5
// 5 3 10 6 : 5-3 >= 0 so  kmin = 4 now 3-10<0 so kmax = 13/2 = 6.5 now 10 - 6 > 0 so kmin = 8 updating kmin to 8.. here kmin > kmax so -1. 
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float max(float a , float b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}
float min(float a , float b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
void replaceArray(vector<int>& nums){
    int n = nums.size();
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;
    for(int i = 0;i<n-1;i++){
        if(nums[i] >= nums[i+1]){   // kmin
            kmin = max(kmin , (nums[i]+nums[i+1])/2.0);
        }
        else{   // kmax
            kmax = min(kmax , (nums[i]+nums[i+1])/2.0);
        }
        if(kmin > kmax){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout<<-1;
    }
    else if(kmin == kmax){ // both kmin and kmax are integers
        if(kmin - (int)kmin == 0){
            cout<<"There is only one value of k : "<< kmin;
        }
        else{
            cout<<-1;  // as k is non integer
        }
    }
    else{
        if(kmin - (int)kmin > 0){  // if kmin is not integer 
            kmin = (int)kmin+1;
        }
        // as kmin = 6.8 so kmin = 7 but if kmax = 8.9 then kmax = 8
        cout<<"Range is : ["<<kmin<<" , "<<(int)kmax<<"]";
    }
    return;
}
int main(){
    vector<int> nums = {5,3,10,3};
    replaceArray(nums);
    return 0;
}
