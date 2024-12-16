// Leetcode - 1701
#include<iostream>
#include<vector>
using namespace std;
double averageWaitingTime(vector<vector<int>>& customers) {
    double cur_time = customers[0][0];
    int n = customers.size();
    double waiting = 0;
    for(int i = 0;i<n;i++){
        if(cur_time < customers[i][0]){
            cur_time = customers[i][0];
        }
        cur_time += customers[i][1];
        if(cur_time < customers[i][0]){
            waiting += customers[i][1];
        }
        else waiting += cur_time - customers[i][0];
    }
    return waiting/(double)n;
}
int main(){
    vector<vector<int>> v = {{2,3},{6,3},{7,5},{11,3},{15,2},{18,1}};
    cout<<averageWaitingTime(v);
    return 0;
}