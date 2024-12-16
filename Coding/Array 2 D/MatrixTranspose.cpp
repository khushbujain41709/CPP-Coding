#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter number of row : ";
    cin>>row;
    cout<<"Enter number of column : ";
    cin>>column;
    int arr[row][column];
    cout<< "Enter the elements of array : "<<endl;
    for (int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < column ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is as shown: "<<endl;
    for (int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < column ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of a matrix is :"<<endl;
    int arr1[column][row];
    for (int i = 0 ; i < column; i++){
        for (int j = 0 ; j < row ; j++){
            arr1[i][j] = arr[j][i];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"First row of transpose or first column of original matrix : "<<endl;
    for ( int i = 0 ; i < row; i++){
        cout<<arr1[0][i]<<" ";
    }
    cout<<endl;
    cout<<"Last column of transpose or last row of original matrix : "<<endl;
    for(int i = 0 ; i < column ; i++){
        cout<<arr1[i][row-1]<<" ";
    }
    cout<<endl;
}