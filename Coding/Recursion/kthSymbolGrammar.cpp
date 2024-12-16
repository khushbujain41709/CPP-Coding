// Leetcode - 779
/*
                                         0               n = 1
                                    /         \
                                   0           1         n = 2
                                 /   \       /   \
                                0     1      1    0      n = 3
                               / \   / \    / \  / \
                               0 1   1 0    1 0  0 1     n = 4
and so on... 
// k starts from index 1
// Odd k zero generate from 0    - 1
// Even k zero generate from 1   - 2
// Odd k one generate from 1     - 3
// Even k one generate from 0    - 4
// From 1st and 3rd observation we come to know that if odd k comes then zero comes from zero and one comes from one.
// From 2nd and 3rd observation we come to know that if even k comes then zero comes from one and one comes from zero. 
// SUMMARY ->
    EVEN - FLIP 
    ODD - SAME
*/
#include<iostream>
using namespace std;
// Time Complexity = O(n)
int kthGrammar(int n , int k){
    if(n == 1){
        return 0;
    }
    if(k % 2 == 0){ // flip
        int ans = kthGrammar(n-1 , k/2);
        if(ans == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{ // same
        return kthGrammar(n-1 , k/2 +1); // return same in case of odd.
    }
}    
int main(){
    cout<<kthGrammar(3,4);
    return 0;
}