// Leetcode - 867
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix){
    int m = matrix.size();  // size() gives number of rows in matrix in 2 D array
    int n = matrix[0].size();  // this gives no.of columns in matrix in 2 D array as 
    // arr[i][j] indiactes i 1D array in which each 1 D array has j elements.
    vector<vector<int>> t(n,vector<int> (m));  // bracket around m is imp
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            t[i][j] = matrix[j][i];
        }
    }
    return t;
}
int main(){
    int row,column;
    cout<<"Enter number of row : ";
    cin>>row;
    cout<<"Enter number of column : ";
    cin>>column;
    vector<vector<int>> v , res;
    v = {{1,2,3},{8,9,11},{4,2,5}};
    for(int j = 0;j<3;j++){
        for(int i = 0;i<3;i++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    res = transpose(v);
    cout<<"The transpose of a matrix is :"<<endl;
    for(int j = 0;j<3;j++){
        for(int i = 0;i<3;i++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}