#include<iostream>
using namespace std;
void arrCreation(int num,int num1 , int arr[100][100]){
    for (int i = 0 ; i < num ; i++){
        for (int j = 0 ; j < num1 ; j++){
            cin>>arr[i][j];
        }
    }
}
void matrixMultiplication(int num ,int num1 ,int column1,int column2,int arr[100][100] ,int arr1[100][100] , int result_matrix[100][100]){
    for (int i = 0; i < num; ++i) {  
        for (int j = 0; j < column2; ++j) {
            result_matrix[i][j] = 0;
            for (int k = 0; k < column1; ++k) {
                result_matrix[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < column2; ++j) { // since result_matrix has num x column2 elements .
            cout<<result_matrix[i][j]<<"\t";
        }
        cout<<endl;}
}
int main(){
    int row1;
    cout<<"Enter a number of row :";
    cin>>row1;
    int column1;
    cout<<"Enter a number of column :";
    cin>>column1;
    int arr[100][100];
    cout<< "Enter the elements of first array : "<<endl;
    arrCreation(row1 ,column1 , arr);
    int arr1[100][100];
    int row2;
    cout<<"Enter a number of row2 :";
    cin>>row2;
    int column2;
    cout<<"Enter a number of column2 :";
    cin>>column2;
    cout<< "Enter the elements of second array : "<<endl;
    arrCreation(row2 ,column2 , arr1);
     cout<<"The matrix is as shown: "<<endl;
    for (int i = 0 ; i < row1 ; i++){
        for (int j = 0 ; j < column1 ; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0 ; i < row2; i++){
        for (int j = 0 ; j < column2 ; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The multiplication of these two array in form of matrix is :"<<endl;
    int result[100][100];
    matrixMultiplication(row1,row2, column1, column2,arr , arr1 ,result);
    return 0 ;
}