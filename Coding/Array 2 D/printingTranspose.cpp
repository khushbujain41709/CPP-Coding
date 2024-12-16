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
    for(int j = 0;j<column;j++){
        for(int i = 0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}