# include<iostream>
using namespace std;
int Search(int arr[] , int size , int value){
    int i;
    for (i = 0 ; i < size ; i++){
        if (arr[i] == value){
            return i ;
            break;
        }
    }
    return -1;
}
int main(){
    int value , size;
    cout<<"Enter the size of the array : ";
    cin>> size;
    int arr[size];
    cout<<"Enter the elements of the array :"<<endl;
    for ( int i = 0 ; i<size ; i++){
        cin>> arr[i];
    }
    cout<<"Enter the value to be searched : ";
    cin>> value;
    cout<<"The array is : "<<endl;
    for ( int i = 0 ; i<size ; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int result = Search(arr , size , value);
    if(result == -1){
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"The index of the searched item is : ";
        cout<<result<<endl;
    }
    return 0;
}