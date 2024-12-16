// Study of all or approxiamate space used in terms of given 'n' or 'm'.
// Constant space complexity - O(1).
// Constant time complexity - O(1).
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i]++;
    }
    // Space Complexity - O(n)

    int c =0;
    for(int i = 0;i<n;i++){
        c++;
    }
    // Space complexity - O(1)

    // Note - O(k) ~ O(1) where k is constant.

    int m;
    cin>>m;
    vector<int> a;    // since size is given like the vector<int> a(n) and vector<int> b(m) then space complexity is O(m+n).
    vector<int> b;     
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            a.push_back(10);
            b.push_back(10);
        }
    }
    // space complexity is O(m*n) as 10 is pushed n*m times in both a and b vector .Time complexity is O(m*n).
    
    // Space complexity for creating a 2D matrix is O(m*n) that is number of rows * number of columns.

    int a[n],b[n],c[n];
    for(int i = 0;i<n;i++){
        c++;
    }
    // Space complexity = O(3n) ~ O(n).

    int p[n][n/2];
    for(int i = 1;i<n;i*=2){  // Time complexity of outer loop - log n to base 2
        for(int j = 0;j<n/2;j++){ // n/2 iterations or rounds
            p[i][j]++;
        }
    }
    // Space complexity = O(n * n/2) = O(n^2 / 2) = O(n^2).
    // Time complexity = n*log n

    // Note - If outer loop have i and inner have j , outer loop is independent of j and inner loop is independent of i then simply multiply both loops time complexity seperately to find overall time complexity.
    return 0;
}