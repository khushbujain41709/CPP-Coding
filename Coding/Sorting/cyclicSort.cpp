// Cyclic sort - It is used when array is in range [1,n] and [0,n] 
// Time complexity = O(n)
// space complexity = O(1)

// Worst number of swaps in cyclic sort for an length n? 
// => n-1 swaps
#include<iostream>
#include<vector>
using namespace std;
void cyclic(vector<int>& v){
    int i = 0;
    while(i < v.size()){
        if(v[i] == v[v[i]-1]){
            i++;
        }
        else{
            swap(v[i],v[v[i]-1]);
        }
    }
    return ;
}
int main(){
    vector<int> v = {5,1,4,3,2};
    cyclic(v);
    for(int i = 0;i<v.size();i++){
        cout<< v[i] <<" ";
    }
    return 0;
}