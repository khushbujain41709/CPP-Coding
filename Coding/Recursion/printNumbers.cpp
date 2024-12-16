// printing numbers with extra parameter
#include<iostream>
using namespace std;
void printAscending(int m , int n){
    if(m>n){          // base case
        return;
    }
    cout<<m<<endl;
    printAscending(m+1,n);    // recursive case
}
void printDescending(int m , int n){
    if(m>n){          // base case
        return;
    }
    printDescending(m+1,n);    // recursive case
    cout<<m<<endl;
}
int main(){
    int num , num2;
    cout<<"Enter starting number : ";
    cin>>num;
    cout<<"Enter ending number : ";
    cin>>num2;
    cout<<endl;
    printAscending(num,num2);
    cout<<endl;
    printDescending(num,num2);
    return 0;
}