#include<iostream>
using namespace std;
bool isprime(int n){
    if (n<=1) return false;
    for(int i=2;i<n/2;i++){ // n/2 reduces time complexity and time traversing covers all factors also.
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"All prime numbers till "<<n<<" is : ";
    for(int i=0;i<=n;i++){
        if(isprime(i)) cout<<i<<" ";
    }
}