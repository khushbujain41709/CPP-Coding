// Strings are basically character arrays
#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[] = {'a','b','c','e','f'}; // valid
    char str1[6] = "abcde";         // throws error when printed so invalid as it stores '\0' at end of char array.
    char str2[5] = "abcd";          // valid       
    for(int i = 0;i<5;i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl;

    //char ch = '\';  This is not a character
    char ch = '\0';    // It is a null character
    cout<<ch;
    cout<<(int)ch;
    cout<<endl;

    cout<<(int)str1[5];  // It is a null character hence it stores '\0' at end of char array
    cout<<endl;


    // Traversing strings without size
    // 1)
    for(int i = 0;str2[i] != '\0';i++){
        cout<<str2[i]<<" ";
    }
    cout<<endl;
    //2)
    cout<<str<<endl;
    cout<<str1<<endl;
    char strr[] = {'a','b','c','d','e','\0','f','g','h'};
    cout<<strr<<endl;  // leaves printing when \0 encounters

    // String is a data type
    string s = "khushbu";
    cout<<s<<endl;
    return 0;
}