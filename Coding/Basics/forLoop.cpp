#include<iostream>
using namespace std;
int x = 0;
int main(){
    // implementation of for loop
    int i ;
    for ( i = 2 ; i<11 ; i= i+2){
        cout<<i<<"\t";
    }
    cout<<i;// since i is defined outside the code so it can be accessed.
}