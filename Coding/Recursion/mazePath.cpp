// Leetcode - 62
// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.The test cases are generated so that the answer will be less than or equal to 2 * 10^9.
// Total ways = Right ways(first step in right direction) + down ways (first step in down direction).
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// Define a function nCr to calculate Combination (nCr) for given n and r.find total number of unique path (t) = (m-1) + (n-1). (As we have to take n-1 right steps and m-1 down steps).Select m-1 down or n-1 right from t. i.e (t)nCr(m-1).
int nCr(int n, int r){
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    double res = 0;
    for (int i = 0; i < r; i++) {
        res += log(n-i) - log(i+1);
    }
    return (int)round(exp(res));
}
int uniquePathsLeetcode(int m, int n){
    int t = (m-1) + (n-1);
    return nCr(t,m-1);
}

int solveVector(int m, int n){
    vector<vector<int>> v(m+1, vector<int> (n+1, 0));
    v[0][0]=1;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 && j==0){
                v[i][j]=1;
                continue;
            }
            int first=0, second=0;
            if(i > 0)
                first =v[i-1][j];
            if(j>0)
                second = v[i][j-1];
                v[i][j] = first+second;
            }
        }
        return v[m][n];
    }
int uniquePathsLC(int m, int n) {
    int ans = solveVector(m-1, n-1);
    return ans;
}
// Recursion method shows time limit exceeded
int uniquePaths(int sr, int sc , int er ,int ec){ 
    if(sr>er || sc>ec){
        return 0;
    }
    if(sr == er && sc == ec){
        return 1;
    }
    int rightWays = uniquePaths(sr,sc+1,er,ec);
    int downWays = uniquePaths(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int uniquePaths(int m,int n){ 
    if(m == 1 && n == 1){
        return 1;
    }
    if(m < 1|| n < 1){
        return 0;
    }
    int rightWays = uniquePaths(m,n-1);
    int downWays = uniquePaths(m-1,n);
    int totalWays = rightWays + downWays;
    return totalWays;
}

// printPath
void printPaths(int sr, int sc , int er ,int ec , string s){ 
    if(sr>er || sc>ec){
        return;
    }
    if(sr == er && sc == ec){
        cout<<s<<endl;
        return;
    }
    printPaths(sr,sc+1,er,ec,s+'R');
    printPaths(sr+1,sc,er,ec,s+'D');
    return;
}

// printPath
void printPaths(int m, int n, string s){ 
    if(m<1 || n<1){
        return;
    }
    if(m == 1 && n == 1){
        cout<<s<<endl;
        return;
    }
    printPaths(m , n-1 ,s+'R');
    printPaths(m-1 , n ,s+'D');
    return;
}
int main(){
    cout<<uniquePathsLeetcode(3,3)<<endl;
    cout<<uniquePathsLC(3,3)<<endl; // matrix has 3 rows and 7 columns but 1 , 1 is given as that we get 3,7 as rows and c olumns not as its index. Otherwise write(0,0,2,6).
    // Same number of ways for m*n matrix and n*m matrix.
    string s = "";
    printPaths(3,3,s);
    return 0;
}
