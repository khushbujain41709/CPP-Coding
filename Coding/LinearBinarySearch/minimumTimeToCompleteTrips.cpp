// Leetcode - 2187
#include<iostream>
#include<vector>
/*
Input: time = [1,2,3], totalTrips = 5
Output: 3
Explanation:
- At time t = 1, the number of trips completed by each bus are [1,0,0]. 
  The total number of trips completed is 1 + 0 + 0 = 1.
- At time t = 2, the number of trips completed by each bus are [2,1,0]. 
  The total number of trips completed is 2 + 1 + 0 = 3.
- At time t = 3, the number of trips completed by each bus are [3,1,1]. 
  The total number of trips completed is 3 + 1 + 1 = 5.
So the minimum time needed for all buses to complete at least 5 trips is 3.
*/
using namespace std;
bool check(int mid,vector<int>& time, int totalTrips){
    int n = time.size();
    long long trips = 0;
    for(int i = 0;i<n;i++){
        trips += mid/(long long)time[i];
    }
    if(trips < (long long)totalTrips) return false;
    else return true;
}
long long minimumTime(vector<int>& time, int totalTrips){
    int n = time.size();
    long long low = 1;
    int maxx = time[0];
    for(int i = 0;i<n;i++){
        if(time[i] > maxx){
            maxx = time[i];
        }
    }
    long long m = (long long)maxx;
    long long high = m * (long long)totalTrips;  
    // as [3,3,3] after 15 hours they complete [5,5,5] trips as they complete 1 trip in 3 hour each. 
    // as [9,7,10,9,10,9,10] , totalTrips = 1 has low = 1 , if high = m*totalTrips/n then 10*1/7 = 1 so mid = 1 then ans = 1 but ans should be 7 so use high = m*totalTrips
    long long ans = -1;
    while(low <= high){
        long long mid = low + (high - low)/2;
        if(check(mid,time,totalTrips)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {1,2,3};
    int totalTrips = 5;
    cout<<minimumTime(v,totalTrips);
    return 0;
}