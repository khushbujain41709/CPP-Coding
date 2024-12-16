#include<iostream>
using namespace std;
class hello{
    int range;
    string city;
    // constructor overloading
    hello(int r , string s) : range(r),city(s){}
    hello(int r) : range(r) , city("Paris"){}
    hello() : range(1000) , city("Tokyo"){}
};
int main(){
    
    return 0;
}