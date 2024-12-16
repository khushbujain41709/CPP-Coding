#include<iostream>
using namespace std;
int largest(int row , int column , int arr[100][100]){
    int max = arr[0][0];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int row , column;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter column : ";
    cin>>column;
    int arr[100][100];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>arr[i][j];
            
        }
    }
    cout<<largest(row,column,arr);
    return 0;
}