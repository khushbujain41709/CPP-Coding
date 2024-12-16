// #include<iostream>
// using namespace std;
// int main(){
    // print GP 3 , 12 , 48 , .....
#include <bits/stdc++.h> 
using namespace std; 
// int main() { 
//     int n; 
//     cin >> n; 
//     int start = 3, r = 4; 
//     while (n--) { 
//     cout << start << " "; 
//     start *= r; 
//     } 
  // is angstrom ? 
    int Digits(int n){
        int count = 0;
        while (n > 0){
            n /= 10;
            count +=1;
        }
        return count;
    }
    int power(int base , int exponent){
        int result = 1 ;
        for ( int i = 0 ; i<exponent ;i++ ){
            result *= base ;
        }
        return result;
    }
 
    bool is_angstrom(int num){
    int number  = Digits(num);
    int Original_num = num ;
    int sum=0;
    while(Original_num!= 0){
        int digit = Original_num % 10 ;
        sum += power(digit , number);
        Original_num /= 10;
    }
    return sum == num;
}

    
    int main(){
        cout<<"Angstrom numbers from 1 to 1000 are : ";
        for (int i = 1 ; i<1001 ; i++){
            if (is_angstrom(i)){
                cout<<i<<" ";
            }
        }
    return 0;
}


