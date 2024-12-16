// Leetcode - 1402
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction){
    int n = satisfaction.size();
    int sum = 0;
    sort(satisfaction.begin() , satisfaction.end());
    // This is wrong see case 1 in leetcode instead use suffix sum
    // for(int i = 0;i <n;i++){
    //     if(satisfaction[i] >= 0){
    //         sum += k*satisfaction[i];
    //         k++;
    //     }
    // }
    for(int i = n-2;i>=0;i--){
        satisfaction[i] += satisfaction[i+1];
    }
    for(int i = 0;i <n;i++){
        if(satisfaction[i] >= 0){
            sum += satisfaction[i];
        }
    }
    return sum; 
}    
int main(){
    vector<int> v = {4,3,2};
    cout<<maxSatisfaction(v);
    return 0;
}