// THERE ARE TWO TYPES OF TYPECASTING - IMPLICIT AND EXPLICIT
// Take a float input and print the fractional part of the number.
# include<iostream>
using namespace std;
int main(){
    float num;  // -1.2  // 5.7
    cout<<"Enter a number : ";
    cin>>num;
    int fract = (int)num;  // Explicit typecasting // -1  // 5
    float fractional = num - fract ;  // -0.2  // 0.7
    if (num < 0){
        int num1 = fract  - 1 ; // -2
        float z = num - num1;  // 0.8
        cout <<"fractional part is : "<< z;
    } 
    else cout<<"fractional part is : " << fractional <<endl;  // 0.7
   
    int x = 10;
    char y = 'a'; // 97
    int z = x + y;     // Implicit typecasting
    cout<<z; // 107

}