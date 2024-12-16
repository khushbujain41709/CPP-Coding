// typecasting of string is not possible and gives error
#include<iostream>
using namespace std;
int main(){
    int x =  123456;
    string s = to_string(x);
    cout<<s<<endl;
    return 0;
}