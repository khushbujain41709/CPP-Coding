#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout << "Enter base : ";
    cin>> a;
    cout << "Enter exponent : ";
    cin>> b;
    float power = 1;
    bool flag = true;
    if(b<0){
        flag = false;
        b = -b;
    }
    if(b>0){
        for (int i = 1; i <= b ; i++){
        power *= a;
        }
    }
    if(flag == false){
        power = 1/ power;
        b = -b;
    }
    if (a == 0 && b == 0) cout<<"Not Defined";
    else cout<<a <<" raised to power "<< b <<" is : "<<power<<endl;
    return 0; 
}
