// In an array Every element occurs three times excpet one element . Return that element.
// Conditions - Space complexity - O(1) . So no vector can be made to store count and Time complexity - O(n). 
// Similar to leetcode - 136 and 137 and solved in array folder(singleNumber)
// Steps - 
/*
1) Sum the bits in the same position of all numbers from end .
2) Then take modulo with 3
3) The bits for which the sum is not divsible by 3 , are bits of number with single occurence.
4) {5,5,5,8} - {0101,0101,0101,1000}

For i = 0 (checking the 0th bit):
x = 1 << 0 → x = 1 (binary 0001)
Initialize sum = 0.
Inner Loop:
j = 0: nums[0] = 5 → 5 & 1 = 1 → sum = 1
j = 1: nums[1] = 8 → 8 & 1 = 0 → sum = 1
j = 2: nums[2] = 5 → 5 & 1 = 1 → sum = 2
j = 3: nums[3] = 5 → 5 & 1 = 1 → sum = 3
Check sum % 3 != 0:
sum = 3 → 3 % 3 = 0 (condition false, result remains 0)
For i = 1 (checking the 1st bit):
x = 1 << 1 → x = 2 (binary 0010)
Initialize sum = 0.
Inner Loop:
j = 0: nums[0] = 5 → 5 & 2 = 0 → sum = 0
j = 1: nums[1] = 8 → 8 & 2 = 0 → sum = 0
j = 2: nums[2] = 5 → 5 & 2 = 0 → sum = 0
j = 3: nums[3] = 5 → 5 & 2 = 0 → sum = 0
Check sum % 3 != 0:
sum = 0 → 0 % 3 = 0 (condition false, result remains 0)
For i = 2 (checking the 2nd bit):
x = 1 << 2 → x = 4 (binary 0100)
Initialize sum = 0.
Inner Loop:
j = 0: nums[0] = 5 → 5 & 4 = 4 → sum = 1
j = 1: nums[1] = 8 → 8 & 4 = 0 → sum = 1
j = 2: nums[2] = 5 → 5 & 4 = 4 → sum = 2
j = 3: nums[3] = 5 → 5 & 4 = 4 → sum = 3
Check sum % 3 != 0:
sum = 3 → 3 % 3 = 0 (condition false, result remains 0)
For i = 3 (checking the 3rd bit):
x = 1 << 3 → x = 8 (binary 1000)
Initialize sum = 0.
Inner Loop:
j = 0: nums[0] = 5 → 5 & 8 = 0 → sum = 0
j = 1: nums[1] = 8 → 8 & 8 = 8 → sum = 1
j = 2: nums[2] = 5 → 5 & 8 = 0 → sum = 1
j = 3: nums[3] = 5 → 5 & 8 = 0 → sum = 1
Check sum % 3 != 0:
sum = 1 → 1 % 3 != 0 (condition true, result |= 8)
result = 0 | 8 = 8
For i = 4 to i = 31:
For higher bits, similar steps are followed, but since the given numbers are small, no higher bits are set. Hence, sum will always be 0, and result will not change further.
Final Result
After all iterations, the final value of result is 8.
So, the single number in the array {5, 8, 5, 5} that occurs only once is 8.
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int singleNumber(vector<int>& nums){
    int result = 0;
    int sum , x;
    for(int i = 0;i<32;i++){  // as integer is of 32 bits.
        sum = 0;
        x = (1 << i);  // left shift -> 1<<2 means 0001 to 0100 
        for(int j = 0;j<nums.size();j++){
            if(nums[j] & x){  // Bitwise and - executes when nums[j] & x != 0
                sum++;
            }
        }
        if(sum % 3 != 0){
            result |= x;  // Bitwise or - to acculumate bits in result.
        }
    }
    return result;
}
int main(){
    vector<int> v = {9,0,0,9,0,4,9};
    int ans  = singleNumber(v);
    cout<<ans<<endl;
    return 0;
}
