// Leetcode - 54
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int>v;
    int row = matrix.size();
    int column = matrix[0].size();
    int minr = 0;
    int maxr = row-1;
    int minc = 0;
    int maxc = column-1;
    int total_element = row*column;
    int count = 0;
    while(minr<=maxr && minc<=maxc){  // step = right->down->left->up so 4 step is in loop
        //1) right
        for(int j = minc;j<=maxc && count<total_element;j++){  
            v.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        //2)down
        for(int i = minr;i<=maxr && count<total_element;i++){
            v.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        //3)left
        for(int j = maxc;j>=minc && count<total_element;j--){
            v.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        //4)up
        for(int i = maxr;i>=minr && count<total_element;i--){
            v.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
    }
    return v;
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
    v = spiralOrder(arr);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}