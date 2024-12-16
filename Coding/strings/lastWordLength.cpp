// Leetcode - 58
#include<iostream>
#include<sstream>
using namespace std;
int lengthOfLastWord(string s) {
    int x;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        x = temp.length();   
    } 
    return x;    
}
int main(){
    string s = "  fly   me to  the    moon";
    int answer = lengthOfLastWord(s);
    cout<<answer<<endl;
    return 0;
}