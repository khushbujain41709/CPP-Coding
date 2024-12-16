#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Share";
    cout<<str<<endl;
    str[2] = 'o';
    cout<<str<<endl;       // Hence strings are mutable and can be updated.

    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    char s[n];
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    int i = 0;
    while(s[i] != '\0'){
        if(i%2 == 0){
            s[i] ='a';
        }
        i++;
    }
    cout<<s<<endl; // gives extra character when input is taken if using while instead of if loop.

    for(int i = 0;str[i] != '\0';i++){
        if(i%2 == 0){
            str[i] ='a';
        }
    }
    cout<<str<<endl;
    return 0;
}