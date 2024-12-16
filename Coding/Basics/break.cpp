#include<iostream>
using namespace std;
int main(){
    // To find prime or composite number 
    int n ;
    cout << "Enter a number : ";
    cin>> n;
    bool flag = true;
    for (int j = 2 ; j < n ; j++){
       if (n % j == 0 ){ 
        flag = false;
        break;
       }
    }
    if (n==1) cout<<"1 is neither prime nor composite.";
    else if (flag == true) cout<< n << " is a prime number . ";
    else cout<<"The number is a composite number. ";      
    }
