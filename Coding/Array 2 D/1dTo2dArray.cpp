// Leetcode - 2022
#include<iostream>
#include<vector>
using namespace std;
// 1) Method 1
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n){
    if(m*n!=original.size()){
        return {};
    }
    vector<vector<int>> vec(m,vector<int>(n));
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            vec[i][j]=original[k];
            k++;
        }
    }
    return vec;
}
// 2) Method 2 - Better
vector<vector<int>>construct2DArrayvector(vector<int>& original, int m, int n){
    int size = original.size();
    if (size != m * n) {
        return {};
    }
    vector<vector<int>> result(m, vector<int>(n, 0));
    for (int i = 0; i < size; ++i) {
        result[i / n][i % n] = original[i];
    }
    return result;
}
int main(){
    vector<int> v = {1,2,3,4};
    vector<vector<int>> v1;
    v1 = construct2DArray(v,2,2);
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}