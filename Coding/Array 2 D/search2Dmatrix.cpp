// Leetcode - 240
/*
// Start from from top right that first row last column
1) if(matrix[i][j]<target){
    go down (no need to go right as we start traversing from last column)
}
2)if(matrix[i][j]>target){
    go left(no need to go up as we are traversing from upside)
}
*/
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();  
    int i = 0;
    int j = n-1;
    while(i<m && j>=0){     // we have not used two for loop as it is not efficient algorithm and gives time limit exceeded when excuted for large matrices.
        if(matrix[i][j] == target){
            return true;
        }
        else if(matrix[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){
    int row,column;
    cout<<"Enter number of row : ";
    cin>>row;
    cout<<"Enter number of column : ";
    cin>>column;
    vector<vector<int>> v(row,vector<int> (column));
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            int x;
            cin>>x;
            v[i][j] = x;
        }
    }
    int target;
    cout<<"Enter target | Number to be searched: ";
    cin>>target;
    cout<<searchMatrix(v,target);
    return 0;
}