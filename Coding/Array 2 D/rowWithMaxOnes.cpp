#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
    {0, 1, 1, 1},
    {0, 0, 1, 1},
    {1, 1, 1, 1},
    {0, 0, 0, 1}
*/
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int max_row=0, n_ones=0;
    int n=mat.size(), m=mat[0].size();
    int row=0, col=m-1;
    for(int i=0;i<n;i++) sort(mat[i].begin(), mat[i].end());
    while(row<n && col>=0){
        if(mat[row][col]==1){
            max_row=row;
            n_ones=m-col;
            col--;
        }
        else row++;
    }
    return {max_row, n_ones}; // imp
}
int main(){
    
    return 0;
}