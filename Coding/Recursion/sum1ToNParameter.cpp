#include<iostream>
using namespace std;
void sum1toN(int sum , int n){
    if(n == 0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n,n-1);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    sum1toN(0,num);     // sum = 0 (initialization)
    return 0;
}