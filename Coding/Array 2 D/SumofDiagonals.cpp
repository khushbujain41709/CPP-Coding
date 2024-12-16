// Leetcode - 1572
// Given a square matrix mat, return the sum of the matrix diagonals.Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
#include<iostream>
#include<vector>
using namespace std;
int diagonalSum(vector<vector<int>>& mat){
    int sumP = 0;
    int sumS = 0;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat.size();j++){
            if(i == j){
                sumP += mat[i][i];
            }
            if(i+j == mat.size()-1){
                sumS += mat[i][j];
            }
        }
    }
    if(mat.size() % 2 != 0){
        sumP = sumP - mat[mat.size()/2][mat.size()/2];
    }
    return sumP + sumS;
}
// Better code
int diagonalSum2(vector<vector<int>>& mat) {
    int n=mat.size();
    int ans=0;
    int mid=n/2;
        for(int i=0;i<n;i++){
            ans+=mat[i][i]+mat[i][n-i-1];
        }
        if(n%2==1){
            ans-=mat[mid][mid];
        }
    return ans;
}
int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(v)<<endl;
    vector<vector<int>> vec = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout<<diagonalSum(vec)<<endl;
    return 0;
}