#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of lines in pascal Triangle : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        int curr = 1;
        for(int j= 0 ; j<=i;j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);  // as I want to print curr evertime.
            // calculated as ncr+1 = ncr*(n-r)/r+1
        }
        cout<<endl;
    }
    return 0;
}