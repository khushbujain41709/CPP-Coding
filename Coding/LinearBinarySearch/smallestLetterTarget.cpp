// Leetcode - 744
#include<iostream>
#include<vector>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target){
    int low = 0;
    int high = letters.size()-1;
    if(target >= letters[high]){
        return letters[0];
    }
    while(low<=high){
        int mid = low+(high-low)/2; // mid = (low+high)/2 gives error bcoz if high = INT_MAX and low = INT_MAX - 10 so (low + high)/2 will be out of bound.
        if(letters[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return letters[low];
}
int main(){
    vector<char> v = {'c','f','j'};
    char target = 'c';
    cout<<nextGreatestLetter(v,target);
    return 0;
}