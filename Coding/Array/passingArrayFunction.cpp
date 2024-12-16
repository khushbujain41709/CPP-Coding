// ALWAYS WHEN WE PASS ARRAY TO A FUNCTION IT GOES BY REFERENCE AS WE ARE NOT PASSING WHOLE ARRAY WE ARE SENDING ITS ADDRESS  , AS WE KNOW THAT..
//    cout<<&arr2<<endl;  
//    cout<<arr2<<endl;   // same as address of arr 
//    cout<<&arr2[0]<<endl;
#include<iostream>
using namespace std;
void display(int a[]){
    //int size = sizeof(a)/ sizeof(a[0]);
    for(int i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int *b){       // see this block
    b[0] = 100;
}
int main(){
    int arr[] = {1,4,2,7,46};
    int size = sizeof(arr)/ sizeof(arr[0]);  // BUT IF WE TRY TO CALCULATE SIZE INSIDE FUNCTION IT WILL GIVE WARNING - sizeof' on array function parameter 'a' will return size of 'int*'.
    // sizeof(a) will return the size of pointer, not the array itself.
    display(arr);
    change(arr);
    display(arr);
    return 0;
}