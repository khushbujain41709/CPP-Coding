// This method uses extra constant space of size 26.
// This is more optimised way 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    //1) filling vector vector with frequency
    vector<int> v(26,0);    // initailize by 0
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    //2) calculating max frequency
    int max = 0;
    for(int i = 0;i<26;i++){
        if(v[i]>max){
        max = v[i];
        }
    }
    //3) finding max frequency character
    for(int i = 0;i<26;i++){
        if(v[i] == max){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}