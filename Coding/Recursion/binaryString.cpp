// Total number of binary string(including 0 and 1) of n length = 2^n with any condition.
#include<iostream>
#include<vector>
using namespace std;
void generateBinary(string s , int n){
    if(s.length() == n){
        cout<<s<<endl;
        return;
    }
    generateBinary(s+'0',n);
    if(s == "" || s[s.size()-1] == '0'){  
        //It should not be written if(s[s.size()-1] == '0' || s == "")
        generateBinary(s+'1',n);
    }
}
int main(){
    int n = 4;
    generateBinary("",n);
    return 0;
}