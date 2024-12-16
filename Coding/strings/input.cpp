#include<iostream>
using namespace std;
int main(){
    string s,s1;
    // cin>>s;      // works only if the given string has no spaces so use getline function
    // cout<<s<<endl;
    getline(cin,s1);
    cout<<s1;
    return 0;
}