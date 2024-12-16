#include<iostream>
using namespace std;
int sum1toN(int n){
    if(n==0){                    // Base case
        return 0;
    }
    int sum = n + sum1toN(n-1);  // Recursive case 
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<sum1toN(num);    
    return 0;
}