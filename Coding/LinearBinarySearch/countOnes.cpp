#include <bits/stdc++.h>
using namespace std;
int countOnes(bool arr[], int n){
    int ans;
    int low = 0, high = n - 1;
    while (low <= high) { // get the middle index
        int mid = (low + high) / 2;
        // else recur for left side
        if (arr[mid] < 1) high = mid - 1;
        // If element is not last 1, recur for right side
        else if (arr[mid] > 1) low = mid + 1;
        else{
        // check if the element at middle index is last 1   
            if (mid == n - 1 || arr[mid + 1] != 1) return mid + 1;
            else low = mid + 1;
        }
    }
}
int main(){
    bool arr[] = { 1, 1, 1, 1, 1, 0, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of 1's in given array is "<< countOnes(arr, n);
    return 0;
}
