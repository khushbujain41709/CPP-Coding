// Leetcode - 1011
// low = max element to be shipped.
// high = sum of all elements
// time complexity = O(n * log(sum - max))
#include<iostream>
#include<vector>
using namespace std;
bool check(int mid , vector<int>& weights, int days){
    int n = weights.size();
    int m = mid;
    int count = 1; // as we are counting day after filling capacity.
    for(int i = 0;i<n;i++){
        if(m >= weights[i]){
            m -= weights[i];
        }
        else{
            count ++;
            m = mid;
            m -= weights[i];
        }
    }
    if(count > days) return false;
    else return true; 
}
int shipWithinDays(vector<int>& weights, int days){
    int n = weights.size();
    int maxx = weights[0];
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(maxx < weights[i]){
            maxx = weights[i];
        }
        sum += weights[i];
    }
    int low = maxx;
    int high = sum;
    int min_capacity = sum;// assume that all weights ships in one day
    while(low<=high){
        int mid = low + (high - low)/2;
        if(check(mid,weights,days)){
            min_capacity = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return min_capacity;
}
int main(){
    vector<int> v = {3,2,2,4,1,4};
    int days = 3;
    cout<<shipWithinDays(v,days);
    return 0;
}