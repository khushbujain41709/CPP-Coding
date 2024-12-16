// String functions
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //1) .size() - It doesnot count '\0'
    string s = "Khushbu Jain is an Engineer";
    cout<<s.size()<<endl;
    //2) Same .length() function do
    cout<<s.length()<<endl;
    cout<<s<<endl;
    //3) .push_back() - adds only single character
    s.push_back('!');
    cout<<s<<endl;
    //4) .pop_back() - removes last character
    string str = "Cherrish";
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    //5) + operator
    string s1 = "River";
    string s2 = "Bank";
    string s3 = "Rank";
    s1 = s2+s1;
    s2 = "xyz"+s1;
    //s3 = s3 + 12;      Invalid
    cout<<s1<<endl;
    cout<<s2<<endl;
    //6) reverse
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    string s4 = "Ramukaka";
    string s5 = "Warangal";
    reverse(s4.begin()+2,s4.end()-3);       // reverses from index 2 to 4
    reverse(s5.begin()+1,s5.begin()+5);    // reverse from index 1 to 4... after comma we write plus 1 index in case of both begin
    cout<<s4<<endl;
    return 0;
}