#include<iostream>
// Bad Time Complexity
using namespace std;
int combination(int n , int r){
    int nfact = 1;
    for(int i =2;i<=n;i++){
        nfact=nfact*i;
    }
    int rfact = 1;
    for(int i =2;i<=r;i++){
        rfact=rfact*i;
    }
    int nrfact = 1;
    for(int i =2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    return ncr;
}
int main(){
    // If we write pascal triangle in left sisded triangle form then : we observe that if there are total P row and columns(rows=column) then each element can  be expressed as  ncr where n is no. of row and r is no.column(n and r are starting form zero).
    int n ;
    cout<<"Enter number of lines in pascal Triangle : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j= 0 ; j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}