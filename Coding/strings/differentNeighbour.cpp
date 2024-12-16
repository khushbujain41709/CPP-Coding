// input a string and return the number of times the neighbouring characters are different from each other.
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int n = s.length();
    int count = 0;
    for(int i = 0;i<n;i++){
        if(n == 1){
            break ;   // example -> a has count = 0
        }
        if(n==2 && s[0] != s[1]){
            count = 1;   // example -> ab has count = 1 as a is different from b
            break;
        }
        if(i == 0 && s[i] != s[i+1]){
            count++;
        }
        else if(i == n-1 && s[i] != s[i-1]){
            count++;
        }
        else if(s[i] != s[i+1] && s[i] != s[i-1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}