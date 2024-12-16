#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter an even length string : ";
    getline(cin,str);
    cout<<str;
    cout<<endl;
    int n = str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
    return 0;
}