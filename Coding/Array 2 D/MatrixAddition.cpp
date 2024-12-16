#include<iostream>
using namespace std;
void arrCreation(int num,int num1 , int arr[100][100]){
    for (int i = 0 ; i < num ; i++){
        for (int j = 0 ; j < num1 ; j++){
            cin>>arr[i][j];
        }
    }
}
void matrixAddition(int num ,int num1 , int arr[100][100] ,int arr1[100][100] , int result_matrix[100][100]){
    for (int i = 0 ; i < num ; i++){
        for (int j = 0 ; j < num1 ; j++){
            result_matrix[i][j] = arr[i][j] + arr1[i][j];
            cout<<result_matrix[i][j]<<"\t";
        }
         cout<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter a number of row :";
    cin>>num;
    int num1;
    cout<<"Enter a number of column :";
    cin>>num1;
    int arr[100][100];
    cout<< "Enter the elements of first array : "<<endl;
    arrCreation(num ,num1 , arr);
    int arr1[100][100];
    cout<< "Enter the elements of second array : "<<endl;
    arrCreation(num ,num1 , arr1);
     cout<<"The matrix is as shown: "<<endl;
    for (int i = 0 ; i < num ; i++){
        for (int j = 0 ; j < num1 ; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0 ; i < num ; i++){
        for (int j = 0 ; j < num1 ; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The addition of these two array in form of matrix is :"<<endl;
    int result[100][100];
    matrixAddition(num,num1, arr , arr1 ,result);
    return 0 ;
}