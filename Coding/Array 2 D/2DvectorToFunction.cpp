#include<iostream>
#include<vector>
using namespace std;

void changeArray(int a[]){
    a[0] = 9;
}

void change2dArray(int arr[][3]){   // size must be given inside bracket , atleast column size.
    arr[0][0] = 100;
}

void changeVector(vector<int> v){
    v[0] = 110;
}

void change2dVector(vector<vector<int>>& v){
    v[0][0] = 500;
}
int main(){
    int arr[] = {1,3,4,5,7};
    cout<<arr[0]<<endl;
    changeArray(arr);
    cout<<arr[0]<<endl;           // by default pass by reference

    int arr2d[][3] = {2,4,6,7,9,0};
    cout<<arr2d[0][0]<<endl;
    change2dArray(arr2d);
    cout<<arr2d[0][0]<<endl;      // by default pass by reference

    vector<int> v = {3,5,6,78,4,2};
    cout<<v[0]<<endl;
    changeVector(v);
    cout<<v[0]<<endl;            // by default pass by value and creates a new vector hence needs ampercent & for pass by reference.

    vector<vector<int>> vec ={{9,2},{3,4,5,6,7,8},{9,10,11,12}};
    cout<<vec[0][0]<<endl;
    change2dVector(vec);
    cout<<vec[0][0]<<endl;      // by default pass by value and creates a new 2d vector hence needs ampercent & for pass by reference.
    return 0;
}