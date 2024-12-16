// Score After Flipping Matrix - Leetcode - 861
// flip here means har zero ko one bana do aur har one ko zero
// Number of one increases in binary number , increases the decimal number is not always true . Example - 110000->48 and 101111->47.
// 1) Replace 0th column with all ones that is flip those rows starting from zero
// 2) Flip the columns having number of zero(noz) greater than number of ones(none).
#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid){
    int row = grid.size();
    int column = grid[0].size();
    // 1) making the first column all 1's
    for(int i = 0;i<row;i++){
        if(grid[i][0]==0){
            for(int j = 0;j<column;j++){
                if(grid[i][j] == 0){
                    grid[i][j] = 1;
                }
                else{
                    grid[i][j] = 0;
                }
            }
        }
    }
    // 2) Flipping the columns where noz>none
    for(int j = 0;j<column;j++){
        int noz = 0;   // declare inside column loop as they reset again for every loop.
        int none = 0;
        for(int i = 0;i<row;i++){
            if(grid[i][j] == 0){
                noz++;
            }
            else none++;
        }
        if(noz>none){    // flip
            for(int i = 0;i<row;i++){  
                if(grid[i][j] == 0){
                    grid[i][j] = 1;
                }
                else{
                    grid[i][j] = 0;
                }
            }
        }
    }
    // converting binary to decimal
    int sum = 0;
    for(int i = 0;i<row;i++){
        int x = 1;   // declare inside row loop as they reset again for every loop. 
        for(int j = column-1;j>=0;j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}
int main(){
    vector<vector<int>> v = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int score = 0;
    score = matrixScore(v);
    cout<<score<<endl;
    return 0;
}