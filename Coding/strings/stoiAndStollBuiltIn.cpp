// Stoi - string to integer
// Stoll - string to long long
// Integer stores numbers from -2^31 to 2^31-1.
// Long long stores numbers from -2^63 to 2^63-1.
// Don't use long because sometimes long uses same bytes as integer so use long long.
#include<iostream>
#include<string>
using namespace std;
int main(){
    //1)to_string() - converts number to string
    int x = 453836;
    string s = to_string(x);
    cout<<s<<endl;
    //2)stoi() - converts string to number(integer)
    string str = "1234567899";
    int a = stoi(str);
    cout<<a<<endl;
    //3)stoll() - converts string to long long
    string str1 = "1328975636864677";
    long long p = stoll(str1);
    cout<<p<<endl;
    return 0;
}