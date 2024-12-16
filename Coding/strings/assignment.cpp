#include<iostream>
#include<string>
using namespace std;
// Check whether the given string is palindrome or not.
bool isPalindrome(string s){
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s1 = "abcsjbwa";
    cout<<isPalindrome(s1)<<endl;   
    // Input a string of length less than 10 and convert it into integer without using builtin function.
    // s.back() -	Access last character
    string s;
    cin >> s;
    int val = 0, pw = 1;
    while (s.size()) {
    val += pw * (s.back() - '0');
    s.pop_back();
    pw *= 10;
    }
    cout << val;
    return 0;
}