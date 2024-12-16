// leetcode - 42
// find previous greatest element array . let it be pge
// find next greatest element array .let it be nge
// now find out min element array of pge , nge .let it be minArray
// compare minArray with original given array.
// if minArray[i]>heights[i] then add the difference of minArray[i] and heights[i] to the sum variable water.
#include<iostream>
#include<vector>
using namespace std;
vector<int> previousGreatestElement(vector<int> &v){
    int n = v.size();
    vector<int> pge(n);
    pge[0] = -1;      // no previous greater element of v[0] exists
    int max = v[0];   // let first element be maximum
    for(int i = 1;i<n;i++){    // leave first element traversal
        pge[i] = max;
        if(max<v[i]){
            max = v[i];
        }
    }
    return pge;
}
vector<int> nextGreatestElement(vector<int> &v){
    int n = v.size();
    vector<int> nge(n);
    int max = v[n-1];  // let last element be maximum
    nge[n-1] = -1;     // no next greater element of v[n-1] exists
    for(int i = n-2;i>=0;i--){         // leave last element traversal
        nge[i] = max;
        if(max<v[i]){
            max = v[i];
        }
    }
    return nge;
}
int trap(vector<int>& heights){
    vector<int> pge = previousGreatestElement(heights);
    vector<int> nge = nextGreatestElement(heights);
    vector<int> minArray(heights.size());
    int water = 0;
    for(int i = 1;i<heights.size()-1;i++){   // leaving -1 of pge and nge
        minArray[i] = min(pge[i] , nge[i]);
        if(minArray[i]>heights[i]){
            water += minArray[i]-heights[i];
        }
    }
    return water;
}
int main(){
    int size;
    vector<int> v;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    cout<<"Enter height of buildings : "<<endl;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = trap(v);
    cout<<"Area of water trapped by building is : ";
    cout<<ans<<endl;
    return 0;
}