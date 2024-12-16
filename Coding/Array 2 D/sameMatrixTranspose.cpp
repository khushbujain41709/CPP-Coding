/*
You are given a 2d array or matrix (n*n).Change this matrix into it's transpose.
*/
#include<iostream>
using namespace std;
void transpose(int n , int (&arr)[100][100]){
    for (int i = 0 ; i < n; i++){
        for (int j = i+1 ; j <n ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter row / column : ";
    cin>>n;
    int arr[100][100];
    cout<< "Enter the elements of array : "<<endl;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is as shown: "<<endl;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of a matrix is :"<<endl;
    transpose(n,arr);
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
