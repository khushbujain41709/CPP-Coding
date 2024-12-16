// Leetcode - 2389
// Longest subsequence of limited sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// sort bcoz here {4,5,1} = {1,4,5} as we need max length of subsequence not proper sunsequence.
// Total time complexity = O((m+n)logn)
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size();
    int m = queries.size(); 
    // sorting
    sort(nums.begin(),nums.end()); // TC = O(nlogn)  SC = O(logn)
    // making prefix array
    for(int i = 1;i<n;i++){        // TC = O(n)
        nums[i] +=  nums[i-1];
    }   

    /*
    // now calculating if nums[i] is less than equal to queries[i].
    // TC = O(m*n)
    for(int i = 0;i<m;i++){  // for each element of queries
        int length = 0;
        for(int j = 0;j<n;j++){
            if(nums[j] <= queries[i]){
                length ++;
            }
            else{
                break;
            }
        }
        queries[i] = length;
    }
    */

    // Using Binary Search (better) // // TC = O(logn)
    for(int i = 0;i<m;i++){  // for each element of queries
        int low = nums[0];
        int high = nums[n-1];
        int length = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > queries[i]){
                high = mid - 1;
            }
            else{
                length = mid + 1;
                low = mid + 1;
            }
        }
    }
    return queries; 
}
int main(){
    return 0;
}