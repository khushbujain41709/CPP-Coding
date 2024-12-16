/*
                           ""|abc
                       a/     b|     \c
                    a|bc     b|ac      c|ab
                 b/ \c      a/  \c      a/ \b
               ab|c  ac|b  ba|c bc|a  ca|b cb|a
               /      |     |       |    |     \
            abc|"" acb|"" bac|"" bca|"" cab|"" cba|""
*/
#include<iostream>
#include<vector>
using namespace std;
void permuteString(string original , string empty){
    int n = original.size();
    if(original == ""){
        cout<<empty<<endl;
        return;
    }
    for(int i = 0;i<original.size();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permuteString(left+right , empty+ch);
    } 
}
int main(){
    string s = "123";;
    permuteString(s,"");
    return 0;
}