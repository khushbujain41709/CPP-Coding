#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& heights){
    int n = heights.size();
    //1)forming previous greatest element array
    vector<int> pge_nge_min(n);
    int max = heights[0];
    pge_nge_min[0] = -1;
    for(int i = 1;i<n;i++){
        pge_nge_min[i]= max;
        if(max<heights[i]){
            max = heights[i];
        }
    }
    //2)In same array storing min of nge and pge while calculating nge
    pge_nge_min[n-1] = -1;
    max = heights[n-1];
    for(int i = n-2;i>=0;i--){
        if(max<pge_nge_min[i]){
            pge_nge_min[i] = max;
        }
        if(max<heights[i]){
            max = heights[i];
        }
    }
    //3)calculating area of water 
    int water = 0;
    for(int i = 1;i<n-1;i++){
        if(pge_nge_min[i]>heights[i]){
            water += pge_nge_min[i]-heights[i];
        }
    }
    return water;
}
int main(){
    int size , water;
    vector<int> v;
    cout<<"Enter size of vector : ";
    cin>>size;
    cout<<"Enter building blocks in a vector form : "<<endl;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    water = trap(v);
    cout<<"Area of trapped water is : "<<water<<endl;
    return 0;
}