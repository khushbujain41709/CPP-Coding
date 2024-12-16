#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Khushbu Jain is an Engineer!"; // sort function sorts lexically that is according to ascii number  
    cout<<s<<endl;
    sort(s.begin(),s.end()); // counts spaces first then characters like @,#,$ then capital letters and then small letters.
    cout<<s<<endl;
    return 0;
}