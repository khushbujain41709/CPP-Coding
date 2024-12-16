#include<iostream>
using namespace std;
int main(){
    int arr[6] = {4,5,2,1,6,0};

    int* ptr = arr;       // more correct method , points to first element of array and has it's address.
//  int* ptr2 = &arr;      // gives error
    int* ptr3 = &arr[0];   // correct method

    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;
    ptr[0] = 8;
    for(int i = 0 ;i<6;i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    *ptr= 9;  // ptr [0] = 8;
    for(int i = 0 ;i<6;i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    for(int i = 0 ;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;// again points to first element of array and has it's address.

    cout<<endl;

    for(int i = 0 ;i<6;i++){
        cout<<i[ptr]<<" ";   // or i[arr]
    }
    ptr = arr;// again points to first element of array and has it's address.
    return 0; 
}