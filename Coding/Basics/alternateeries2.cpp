#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : ";
    cin>> n;
    int sum = 0;
    for (int i  = 1 ; i <= n ; i++){
        if(n%2 == 0){
            sum = (-1)*n/2;
        }
        else{
            sum = (-1)*n/2 + n ;  // we don't write it as n/2 afteer simplifying. If n = 7 then 7/2 is 3 but -n/2 +n is -7/2 + 7 = -3 + 7 = 4 . 
        }
    }
    cout<<"Sum is : "<< sum<<endl;
}