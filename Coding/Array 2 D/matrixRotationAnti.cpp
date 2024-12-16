// Leetcode - 48
// Rotate matrix by 90 clockwise.
// Leetcode - 867
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int m = matrix.size();  // size() gives number of rows in matrix in 2 D array
    for(int i = 0;i<m-1;i++){
        for(int j = i+1;j<m;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // reversing columns
    for(int k = 0;k<m;k++){   // traversing in each row
    int i = 0;
    int j = m-1;
        while(i<=j){   // swapping k,i and k,j
            int temp = matrix[i][k];
            matrix[i][k] = matrix[j][k];
            matrix[j][k] = temp;
            i++;
            j--;
        }
    }
    return;
}
int main(){
    vector<vector<int>> v;
    v = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(v);
    cout<<"The 90 degree rotated image of a matrix is :"<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}