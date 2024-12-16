// Leetcode - 498
#include<iostream>
#include<vector>
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    
}
int main(){
    int row,column;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter column : ";
    cin>>column;
    vector<vector<int>> arr(row,vector<int> (column));
    vector<int> v;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            int x;
            cin>>x;
            arr[i][j] = x;
        }
    }
    cout<<endl;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    v = findDiagonalOrder(arr);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}