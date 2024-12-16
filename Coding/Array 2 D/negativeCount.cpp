// Leetcode - 1351
// Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
// Follow up - Could you find an O(n + m) solution?
#include<iostream>
#include<vector>
using namespace std;
int countNegatives(vector<vector<int>>& grid){
    int row = grid.size();
    int column = grid[0].size();
    int count = 0;
    // starting from bottom left to top right element.
    int j = 0;
    int i = row-1;
    while(i >= 0 && j < column){
        if(grid[i][j] < 0){
            count += column -j; // as all elements are negative after anegative element in a row as they are sorted in descendingorder.
            i--;
        }
        else{
            j++;
        }
    }
    return count;
}
int main(){
    vector<vector<int>> v = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout<<countNegatives(v);
    return 0;
}