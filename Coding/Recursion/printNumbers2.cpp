// printing numbers without extra parameter
#include<iostream>
using namespace std;
void printAscending(int n){
    if(n == 0){          // base case
        return;
    }
    printAscending(n-1);    // recursive case
    cout<<n<<endl;
}
void printDescending(int n){
    if(n==0){          // base case
        return;
    }
    cout<<n<<endl;
    printDescending(n-1);    // recursive case
}
int main(){
    int num ;
    cout<<"Enter number : ";
    cin>>num;
    cout<<endl;
    printAscending(num);
    cout<<endl;
    printDescending(num);
    return 0;
}