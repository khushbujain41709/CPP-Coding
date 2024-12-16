#include<iostream>
using namespace std;
int main(){
    int p = 10;
    int y = ++p + p--;
    cout<<endl;
    cout<<endl;
    std::cout << y;
    cout<<endl;
    int x = 5;
    std::cout << x++ << " " << ++x;
}
/*
Let A[1...n] be an array of n distinct numbers. If i < j and A[i] > A[j], then the pair (i, j) is called an inversion of A. What is the expected number of inversions in any permutation on n elements ?
n(n-1)/2
n(n-1)/4
n(n+1)/4
2n[log n]
Answer - The expected number of inversions in any permutation of n elements can be calculated as follows:
Let X be the random variable denoting the number of inversions in a permutation of n elements. For each pair (i, j) where i < j, the probability that A[i] > A[j] is 1/2 (since the elements are distinct and any ordering is equally likely).
So, the expected number of inversions is:
\[E[X] = \sum_{i < j} P(A[i] > A[j])\]
\[= \sum_{i < j} \frac{1}{2}\]
Since there are \(n(n-1)/2\) pairs (i, j) where i < j in a permutation of n elements, the expected number of inversions is:
\[E[X] = \frac{n(n-1)}{2} \times \frac{1}{2}\]
\[= \frac{n(n-1)}{4}\]
So, the correct answer is \(n(n-1)/4\).
*/