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
    for(int j = 0;j<column;j++){
        if(j%2==0){
            for(int i = 0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i = row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}