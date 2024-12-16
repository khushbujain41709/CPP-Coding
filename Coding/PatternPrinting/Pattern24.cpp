// Number spiral box
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter outer number of box : ";
    cin>> n;
    //1 1 1 1
    //1 2 2 2
    //1 2 3 3 
    //1 2 3 4
    // for(int i = 1;i<= n;i++){
    //     for(int j = 1; j<=n;j++){
    //         cout<<min(i,j);   // observe this for this part of code.
    //     }
    //     cout<<endl;
    // }
    for(int i = 1;i<= 2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            int a = i;   //pseudo varaibles
            int b = j;
            if (a>n) a = 2*n-i;  // put value and observe.
            if (b>n) b = 2*n-j;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    for(int i = 1;i<= 2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            int a = i;   //pseudo varaibles
            int b = j;
            if (a>n) a = 2*n-i;  // put value and observe.
            if (b>n) b = 2*n-j;
            int x = min(a,b);
            cout<<n-x+1 <<" ";

        }
        cout<<endl;
    }
}