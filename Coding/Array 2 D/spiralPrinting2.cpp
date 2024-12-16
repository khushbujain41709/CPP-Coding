// Leetcode - 59
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generateMatrix(int n){
        vector<vector<int>> matrix(n,vector<int> (n));
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        int num = 1;
        while(minr<=maxr && minc<=maxc){  // step = right->down->left->up so 4 step is in loop
            //1) right
            for(int j = minc;j<=maxc;j++){ 
                matrix[minr][j] = num;
                num++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            //2)down
            for(int i = minr;i<=maxr;i++){
                matrix[i][maxc] = num;
                num++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            //3)left
            for(int j = maxc;j>=minc;j--){
                matrix[maxr][j] = num;
                num++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            //4)up
            for(int i = maxr;i>=minr;i--){
                matrix[i][minc] = num;
                num++;
            }
            minc++;
        }
        return matrix;
    }
int main(){
    int n;
    cout<<"Enter row/column : ";
    cin>>n;
    vector<vector<int>> arr;
    arr = generateMatrix(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}