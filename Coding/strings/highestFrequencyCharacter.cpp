// This is not optimised code , so prefer next method.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    //1) calculating frequency
    int max = 0;
    for(int i = 0;i<n;i++){
        int count = 1;       // each character will occur atleast once.
        for(int j = i+1;j<n;j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(max < count){
            max = count;
        }
    }
    //2) printing most frequent character
    for(int i = 0;i<n;i++){
        char ch = s[i];
        int count = 1;       // each character will occur atleast once.
        for(int j = i+1;j<n;j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(max == count){
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}