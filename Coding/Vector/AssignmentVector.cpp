#include<iostream>
using namespace std;
int countNumberGreater(int arr[],int size,int item){
    int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>item){
            count++;
        }
    }
    return count;
}
void sorted(int arr[] , int size){
    bool flag = 0;
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            flag = 0;
            break;
        }
        else{
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}
// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique. 
int unique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];    //you can use the XOR operator (^) which cancels out duplicate numbers when applied twice.
    }
    return result;
}
int findUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return arr[i];
        }
    }
    return -1; // No unique element found
}
int main() {
    int arr[] = {1,9,12,43,222,1000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countNumberGreater(arr,n,1)<<endl;

    sorted(arr,n);

    int arr1[] = {1,2,4,1,3,2,4,5,5,7,3};
    int n2 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<unique(arr1,n2)<<endl;

    int arr3[] = {2, 4, 3, 6, 3, 2, 4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "The unique element is: " << findUnique(arr3, n3) << endl;
    
    //Move all zeros to the end of the array. 
    int A[] = { 0, 6, 0, 7, 6, 0, 9, 1 }; 
    int n = 8; 
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (A[i] != 0) { 
            swap(A[j], A[i]); 
            j++; 
        } 
    } 
    for (int i = 0; i < n; i++) { 
        cout << A[i] << " "; 
    } 
    return 0;
}

