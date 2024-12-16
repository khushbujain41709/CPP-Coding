//Binary tree
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    int a = 5; // declare any random value
    for(int i = 1 ; i <= row; i++){
            if (i%2 != 0 ){
                a = 1;
            }
            else a = 0;
            for(int j = 1 ; j <= i; j++){
                cout<<a;
        
            // Now flipping value of a for every round of j
                if (a==1) a = 0;
                else a = 1;
            }
        cout<<endl;   
    }
}
// This question can be done when i == j && (i% 2 !=0 && j &&2 !=0) then cout 1 
// OR ((i+j)% 2 = 0) then cout 1 