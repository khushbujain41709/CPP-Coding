#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSubset(vector<int>& arr1,vector<int>& arr2) {
    vector<int> sorted_arr1 = arr1;
    vector<int> sorted_arr2 = arr2;
    sort(sorted_arr1.begin(), sorted_arr1.end());
    sort(sorted_arr2.begin(), sorted_arr2.end());
    int i = 0, j = 0;
    while (i < sorted_arr1.size() && j < sorted_arr2.size()) {
        if (sorted_arr1[i] < sorted_arr2[j]) {
            i++;
        } else if (sorted_arr1[i] == sorted_arr2[j]) {
            i++;
            j++;
        } else {
            return false;
        }
    }
    return j == sorted_arr2.size();
}
int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 1, 5};
    if (isSubset(arr1, arr2)) {
        cout << "arr2 is a subset of arr1" << endl;
    } else {
        cout << "arr2 is not a subset of arr1" << endl;
    }
    return 0;
}
