#include<iostream>
using namespace std;
// Which one of the following is the time complexity for function fun1? // GATE - 2015 CS
int fun1 (int n){
   int i, j, k, p, q = 0;
   // This loop runs Θ(n) time
    for (i = 1; i < n; ++i){
    p = 0;
    // This loop runs Θ(Log n) times.
    for (j=n; j > 1; j=j/2)
        ++p;
    // Since above loop runs Θ(Log n) times, p = Θ(Log n)
    // This loop runs Θ(Log p) times which loglogn
    for (k=1; k < p; k=k*2)
        ++q;
   
   }
   return q;
}
//T(n) = n(logn + loglogn) 
// T(n) = n(logn) dominant 
//Hence, time complexity will be T(n) = nloglogn

int main(){
    int c = 0;
    int n;
    for(int i = 1;i<=n;i += i){
        for(int j = 0;j<i;j++){ //-> 1+2+4+8+....+2^x where 2^x = n
            c++;  // According to GP sum formula , sum = 2^(x+1)-1 = O(2*n - 1) = O(n)
        }
    }
    // Time Complexity = O(n).

    for(int i = 1;i<=n;i+=i){      // Time complexity is log n
        for(int j = n;j>=0;j--){  // n+1 iterations so Time complexity is O(n)
            c++;
        }
    }
    // Time complexity = O(n*log n)

    for(int i = 1;i*i<n;i*=2){  // condition is i^2 < n so i < root of n 
        for(int j = 0;j<i;j++){ 
            c++;
        }
    }

    for(int i = 1;i*i<n;i*=2){  // condition is i^2 < n so i < root of n 
        for(int j = n;j>i;j--){   // j has n-i iterations -> n-1+n-2+n-4+n-8+....+n-root n
            c++;
    }
    }
    // Time Complexity = O(n(x+1)-(2^(x+1)-1)) = O(n*log of root n base 2 + n - root n)
    // = O(n* log n) because n is ignored as nlogn>n .

    for(int i = 2 ;i<n ;i*=i){ // 2,4,16,256,256^2,....
        c++;  // 2^(2^0),2^(2^1),2^(2^2),,2^(2^3),2^(2^4),.....,2^(2^x) powers in GP = x+1 terms
    }  // let 2^(2^x) = n and let 2^x = t so 2^t = n
    // Time complexity = O(x+1) = O(x) where x+1 is number of terms or iterations which is total number of values i can obtain.
    // x = log(log base2 n) base 2
    // Time complexity = O(log(log n))

    for(int i = 2 ;i*i<n ;i*=i){ // 2,4,16,256,256^2,....and i<root n
        c++;  // 2^(2^0),2^(2^1),2^(2^2),,2^(2^3),2^(2^4),.....,2^(2^x) powers in GP = x+1 terms
    } // let 2^(2^x) = root n and x = log(log base2 root n) base 2 = log(1/2 * log base2 n) base 2
    // x = log(1/2) base2 + log(log n base 2) base 2
    // Time complexity = O(log(log n))

    int k;
    for (int i = 1; i < n; i++) {
    i *= k;
    }
    // Because the loop will run kc-1 times, where c is the number of times i can be multiplied by k before i reaches n. Hence, kc-1=n. Now to find the value of c we can apply log and it becomes logn base k.

    int c = 0;
    for(int i = n; i > 1; i /= i) {
    c++;
    }
    // O(1), because the loop will only be iterated once. After one iteration ‘i’ will become 1 from n and the loop will break.

    for(int i = n; i > 0; i /= 2) {
        for(int j = 0; j < i; j ++) {
            c++;
        }
    }
    // Values of ‘i’ will be n, n/2, n/4, n/8 and so on , So the total number of iterations in the above nested loop will be n + n/2 + n/4 + n/8 + .. Which sums to 2n , So time complexity becomes O(2n-1) ~ O(n).
}