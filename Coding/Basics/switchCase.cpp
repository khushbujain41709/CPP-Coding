#include <iostream>
using namespace std;
int main(){
    float f1 ;
    float f2 ;
    char oprtor ;
    cout<< " Enter the first number : " ;
    cin>> f1;
    cout << "Enter the operator : ";
    cin>> oprtor ;
    cout << " Enter the second number : " ;
    cin>> f2;
    switch(oprtor){
        case '+':
            cout<<"THE SUM OF GIVEN TWO NUMBERS IS : "<<f1+f2<<endl;
            break;
        case '-':
            cout<<"THE SUBTRACTION OF GIVEN TWO NUMBERS IS : "<<f1-f2<<endl;
            break;
        case '*':
            cout<<"THE PRODUCT OF GIVEN TWO NUMBERS IS : "<<f1*f2<<endl;
            break;
        case '/':
            if(f2!=0) cout<<"THE DIVISION OF GIVEN TWO NUMBERS IS : "<<f1/f2<<endl;
            else{
                cout<<"DIVISION BY ZERO IS NOT POSSIBLE.";
                }
            break;
        case '%':
            cout<<"THE MODULUS OF GIVEN TWO NUMBERS IS : "<<(int)f1 % (int)f2<<endl;
            break;
        default:
            cout<<"INVALID OPERATOR !!";
            break;
    return 0 ;        
    } 
}