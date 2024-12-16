// Leetcode - 2483 
#include<iostream>
#include<vector>
using namespace std;
// agr dukan band hai toh number of yes = number of penalty after that hour
// agr dukan khuli hai toh number of no = number of penalty 
// so total penalty in n hours = no of y after n hours(including) + no of n before n hour
// Y ka suffix and N ka prefix
// YYNY 
// pre - 00011
// suf - 32110
// now add pre + suf = 32121
int bestClosingTime(string customers){
    int n = customers.size();
    vector<int> pre(n+1) , suff(n+1);
    // prefix array
    pre[0] = 0;
    for(int i = 0;i<n;i++){
        int Ncount = 0;
        if(customers[i] == 'N') Ncount++;
        pre[i+1] = pre[i] + Ncount;
        // pre[i+1] = pre[i] + (customers[i] == 'N' ? 1 : 0);  can also be written.
    } 
    // suffix array
    suff[n] = 0;
    for(int i = n-1;i>=0;i--){
        int Ycount = 0;
        if(customers[i] == 'Y') Ycount++;
        suff[i] = suff[i+1] + Ycount; 
    }
    // adding both array and finding minPenalty
    int minPen = n+5; // needs to be bigger than n 
    for(int i = 0;i<=n;i++){
        pre[i] += suff[i];
        int pen = pre[i];
        minPen = min(pen,minPen);  
    }
    // finding minPenalty index
    for(int i = 0;i<=n;i++){
        int pen = pre[i];
        if(pen == minPen){
            return i;
        } 
    }
    return n;
}
int main(){
    string v = "YYNY";
    cout<<bestClosingTime(v);
    return 0;
}