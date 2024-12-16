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
    while(minr<=maxr && minc<=maxc){  // step = right->down->left->up so 4 step is in loop
        //1) right
        for(int j = minc;j<=maxc;j++){  
            v.push_back(matrix[minr][j]);
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //2)down
        for(int i = minr;i<=maxr;i++){
            v.push_back(matrix[i][maxc]);
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //3)left
        for(int j = maxc;j>=minc;j--){
            v.push_back(matrix[maxr][j]);
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //4)up
        for(int i = maxr;i>=minr;i--){
            v.push_back(matrix[i][minc]);
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