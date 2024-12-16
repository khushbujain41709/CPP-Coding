#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdefgh";
    //.substr(index) gives string from index to end
    //.substr(index,len) gives string from index and of length len
    cout<<s.substr(3)<<endl;
    cout<<s.substr(2,4)<<endl;

    string str;
    cout<<"Enter an even length string : ";
    getline(cin,str);
    cout<<str;
    cout<<endl;
    int n = str.length();
    string str2 = str.substr(n/2);
    cout<<str2;
    return 0;
}