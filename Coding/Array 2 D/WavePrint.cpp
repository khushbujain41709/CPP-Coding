#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter column : ";
    cin>>column;
    int arr[row][column];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0;i<row;i++){
        if(i%2==0){
            for(int j = 0;j<column;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = column-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}