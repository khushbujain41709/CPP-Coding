#include <iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter the number of the month : ";
    cin>>x;
    // 1,3,5,7,8,10,12 -> 31 Days
    // 4,6,9,11 -> 30 Days
    // 2 -> 28 Days
    // For 31 days we can do single switchs statement as switch((x<=7 && x%2 !=0) &&(x>=8 && x%2 == 0)) , then use case 1
    switch(x<=7 && x%2 !=0){
        case 1 :
            cout<<"31 Days";
            break;
    }
    switch(x>=8 && x%2 == 0){
        case 1 :
            cout<<"31 Days";
            break;
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1 :
            cout<<"30 Days";
            break;
    }
    switch(x){       // try and run switch(2) then case 2 in this line and in output use 5th month and see output. 
        case 2 :
            cout<<"28 or 29 Days";
            break;
    }
    cout<<endl;
    int a;
    if (a =10) cout<<"This works"<<endl;
    
    for (int i = 100 ; i>=0; i = i-3){
        cout<<i<<" ";
    }
    return 0 ;        
}  