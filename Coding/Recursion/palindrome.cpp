// Palindrome
#include<iostream>
using namespace std;
bool isPalindrome(string s){    // iterative
    bool flag = true;
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
bool isPalindrome2(string s , int i , int j){   // recursive
    if(i>j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    else{
        return isPalindrome2(s,i+1,j-1);
    }
}
int main(){
    string s = "racecar";
    cout<<isPalindrome(s)<<endl;

    string str = "Badam Shake";
    int n = str.size();
    cout<<isPalindrome2(str,0,n-1);
    return 0;
}