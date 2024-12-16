#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // for(int i = 1;i<=n+1;i++){
    //     for(int j =1 ;j<=i;j++){
    //         if(i%2 == 0){
    //             cout<<(char)(j+64);
    //         }
    //         else cout<<j;
    //     }
    //     cout<<endl;
    // }
    cout<<"--------------------------------------------------------------------"<<endl;
    // int n; 
    // cin >> n; 
    // for(int i = 0; i < n; ++i) { 
    // for(int j = 0; j < n-i-1; ++j) { 
    // cout << " "; 
    // } 
    // for(int j = 0; j < 2 * i + 1; ++j) { 
    // cout << j+1 << " "; 
    // } 
    // cout << endl; 
    // } 
    cout<<"--------------------------------------------------------------------"<<endl;
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; ++i) {
    // for(int j = 1; j <= n - i; ++j) {
    // cout << " ";
    // }
    // for(int j = i-1; j >= 0; --j) {
    // cout << (char)('A'+j) << " ";
    // }
    // for(int j = 1; j < i; ++j) {
    // cout << (char)('A'+j) << " ";
    // }
    // cout << endl;
    // }
    // return 0;

cout<<"--------------------------------------------------------------------"<<endl;
/*Q11. Print the following pattern
Input : n = 4
Output :
*******
*** ***
**   **
*     *
**   **
*** ***
*******
Solution:
#include <bits/stdc++.h>
using namespace std
int main() {
int n;
cin >> n;
for(int i = 0; i < 2 * n - 1; ++i) {
for(int j = 0; j < 2 * n - 1; ++j) {
if(i == n-1 || j == n-1 || i+j == n-1 || j-i == n-1 || i - j ==
n-1 || i
+ j == 3 * (n-1)) {
cout << "*";
} else {
cout << " ";
}
}
cout << endl;
}*/
cout<<"--------------------------------------------------------------------"<<endl;
int n;
cin >> n;
// Printing 0th row
for(int i = 0; i < 2 * n - 1; ++i) {
cout <<"* ";
}
cout << endl;
// Printing upper pattern
for(int i = 1; i < n; ++i) {
for(int j = 0; j < n - i; ++j) {
cout << "* ";
}
for(int j = 0; j < 2 * i - 1; ++j) {
cout << " ";
}
for(int j = 0; j < n - i; ++j) {
cout << "* ";
}
cout << endl;
return 0;
}

}





