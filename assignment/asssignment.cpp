// #include<iostream>
// using namespace std;
// int digit(int n ){
//     int count = 0;
//     while(n != 0){
//         n/= 10 ;
//         count += 1;
//     }
//     return count;
// }
// int main(){
//     int n ;
//     cin >> n;
//     int m = digit(n);
//     int sum = 0;
//     for(int i = 0 ; i < m ; i++){
//         if ((n % 10)%2 == 0 ) {
//             sum += (n%10);
            
//         }
//         n/= 10;
//     }
//     cout<<sum;
    
// }

#include <bits/stdc++.h> // only for cubes angstrom number
using namespace std;
int main( ) {
for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}
}