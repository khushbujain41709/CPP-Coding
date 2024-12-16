// Leetcode - 38
// countAndSay(n) = countAndSay(n-1)
// countAndSay(1) = 1
// countAndSay(2) = 11 that is one 1
// countAndSay(3) = 21 that is two 1
// countAndSay(4) = 1211 that is one 2 and one 1
// countAndSay(5) = 111221 that is one 1 one 2 two 1
// countAndSay(3322251) = 23321511
// This is written as frequency followed by digits.
// 22 will be 22 and 333 will be 33.
#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n) {
    if(n == 1){   // base case
        return "1";
    }
    string ztr = "";
    string str = countAndSay(n-1);
    int frequency = 1;
    char ch = str[0];
    for(int i = 1;i<str.size();i++){
        char dh = str[i];
        if(ch == dh){
            frequency++;
        }
        else{
            ztr += (to_string(frequency)+ch); // 233215
            frequency = 1;  // imp
            ch = dh;  // imp
        }
    }
    ztr += (to_string(frequency)+ch); // for 11 of end as loop ends // imp
    return ztr;
}
int main(){
    int n = 4;
    string s = countAndSay(n);
    cout<<s<<endl;
    return 0;
}