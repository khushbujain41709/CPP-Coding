// Leetcode - 633
#include<iostream>
#include<cmath>
#include<algorithm>
// a^2 + b^2 = c if true return true , else false . x = a^2 and b^2 = y
using namespace std;
// This code gives time limit exceeded in leetcode
// Time complexity = O(c)
bool isPerfectSquares(int z){
    int root = sqrt(z);  // sqrt has O(1) time complexity
    // z = 20 then root = 4 if z = 16 then also root = 4 so check ..
    if(root * root == z) return true;
    else return false; 
}
bool judgeSquareSum1(int c) {
    int x = 0;
    int y = c;
    while(x <= y){
        if(isPerfectSquares(x) && isPerfectSquares(y)){
            return true;
        }
        x++;
        y--;
    }
    return false;  
}// ----------------------------------------------------------------------------
// Time complexity = O(root c)  // imp
// Space complexity = O(1)
bool judgeSquareSum(int c){
    int x = 0;
    int y = c;
    while(x <= y){
        if(isPerfectSquares(x) && isPerfectSquares(y)){
            return true;
        }
        else if(! isPerfectSquares(y)){
            y = (int)sqrt(y) * (int)sqrt(y); // Ex -> y = 41 then sqrt(y) = 6 so new_y = 36
            // This will save y traversal from 41 to 40 to 39 to...36.It directly changes it to 36. 
            x = c - y; // as  x+y = c always
        }
        else{  // x is not perfect
            x = ((int)sqrt(x)+1) * ((int)sqrt(x)+1);// as we want to increase x and decrease y ... y = 41 and x= 0 then y = 36 and x = 5 but then  x = 9 not 4 and y = 32 then y = 25 and x = 16.
            // brackets are imp
            y = c - x;
        }
    }
    return false;
}
int main(){
    cout<<judgeSquareSum(3)<<endl;
    cout<<judgeSquareSum(7)<<endl;
    return 0;
}