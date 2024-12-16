// Leetcode - 33
// Search pivot element / index. Pivot element is the element from which changes starts.Ex - arr - 1 3 4 5 28 33 , arr after rotating - 28 33 1 3 4 5 where 33 is pivot element.Ex2 - arr - 1 3 4 5 28 , arr after rotating - 28 1 3 4 5 where 1 is pivot element as nothing is before 28.
// if k = 1 then use arr[mid] < arr[mid+1] and arr[mid-1] > arr[mid] 
// else arr[mid] > arr[mid+1] and arr[mid] > arr[mid+1] where mid is pivot element.
// for normal elements that are not pivot check that , arr[mid] > arr[high] then low = mid + 1 as they are not pivot and are rotated ones.Similarly if arr[mid] < arr[high] then high = mid - 1.
// if array was already sorted in both decreasing or increasing form then we won't get the pivot element then we just do binary search in whole array.
// This is wrong approach .....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1; 
    if(n == 2){
        if(target == nums[0]) return 0;
        else if(target == nums[1]) return 1;
        else return -1;
    }
    // finding pivot element / index that is smallest element.
    int pivot = -1;
    while(low <=  high){
        int mid = low + (high - low)/2;
        if(mid == 0) low = mid + 1; // as mid - 1 will go out of bound
        else if(mid == n-1) high = mid -1; // as mid + 1 will go out of bound
        else if(nums[mid] < nums[mid+1] && nums[mid] < nums[mid-1]){
            pivot = mid;  // 1 in example 1
            break;
        }
        else if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
            pivot = mid + 1; // 33 in example 1
            break;
        }
        else{  // for other normal numbers
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else if(nums[mid] < nums[high]){
                high = mid - 1;
            }
        }
    }
    if(pivot == -1){  //case 1 -  k = 0 or array is already sorted or no rotation , case 2 - array is decreasing or sorted in reverse order.
        low = 0;
        high = n - 1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return -1;
    }
    // applying binary search in different parts
    if(target >= nums[0] && target <= nums[pivot -1]){ // rotated part
        low = 0;
        high = pivot - 1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
    }
    else{
        low = pivot;
        high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> v = {3,6,2,7,9,0};
    int target = 9;
    cout<<search(v,target);
    return 0;
}