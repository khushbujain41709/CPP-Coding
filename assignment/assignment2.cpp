//QUESTION 1(without executing the code) INPUT -> 2,3,6.
#include <iostream>
using namespace std;
int main(){
// int x;
// cout << "Enter first number\n";
// cin >> x; // user will give ‘x’ a value.
// int y, m;
// cout << "Enter second number and value for taking modulus\n";
// cin >> y >> m; // user will give ‘y’ a value.
// int Z = (x * y) % m;
// cout << "Output is: " << Z;
    cout<<"OUTPUT - 0"<<endl<<" This program calculates remainder and (2*3)%6 = 0 ." <<endl;


//QUESTION 2(without executing the code) INPUT - 3,2
// int x;
// cout<<"Enter first number\n";
// cin>>x; // user will give 'x' a value.
// int y;
// cout<<"Enter second number\n";
// cin>>y; // user will give 'y' a value.
// cout<<(x!=y)<<" "<<(x>=y);
    cout<<"OUTPUT - 1 1<<endl";

//QUESTION 3(without executing the code) INPUT - 2,3 
//     int x,y;
//     cin>>x>>y;
//     x+=y;
//     x-=y;  
//     x%=y;
//     cout<<x;
    cout<<"OUTPUT - 2"<<endl;

//QUESTION 4
    int volume , height , radius;
    cout<<"Enter the height of the cylinder : ";
    cin>>height;
    cout<<"Enter the radius of the cylinder : ";
    cin>>radius;
    volume = 3.14 *radius * radius * height ;
    cout<<"The volume of cylinder is : "<<volume<<endl;

//QUESTION 5 
    char ch1 , ch2;
    cout<<"Enter character 1 : ";
    cin>>ch1;
    cout<<"Enter character 2 : ";
    cin>>ch2;
    int ascii1 = (int)ch1; //typecasting
    int ascii2 = (int)ch2; //typecasting
    cout<<"The difference of ascii values of two characters is : "<<ascii1 - ascii2 <<endl;

//QUESTION 6(without executing the code)
    // int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    // cout<<i; 
    cout<<"OUTPUT - 49"<<endl<<"First 7/5 = 1 gets evaluated then 1 * 6 then 6*6 = 36 then 36+4 = 40 then 40 + 9 = 49 ";
    return 0;
}