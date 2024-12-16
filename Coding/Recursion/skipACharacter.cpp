#include<iostream>
#include<string>
using namespace std;
// removeChar("","abac");
// removeChar("","bac");
// removeChar("b","ac");
// removeChar("b","c");
// removeChar("bc","");
// Very worst in case of space complexity ass every time a new string is created.
void removeChar(string s , string original){
    if(original.length() == 0){
        cout<<s<<endl;
        return;
    }
    if(original[0] == 'a'){
        removeChar(s,original.substr(1));//removes first element from always using substr(1)
    }
    else{
        removeChar(s+original[0],original.substr(1));
    }
}
// Better recursive code
void removeChar2(string s , string original,int index){
    if(original.length() == index){
        cout<<s<<endl;
        return;
    }
    if(original[index] == 'a'){
        removeChar2(s,original,index+1);
    }
    else{
        removeChar2(s+original[index],original,index+1);
    }
}
int main(){
    string snew , sFun ;
    string s = "an apple a day keeps a doctor away.";
    for(int i = 0;i<s.length();i++){
        if(s[i] != 'a'){
            snew += s[i];
            //snew.push_back(s[i]); // can also be written 
        }
    }
    cout<<snew<<endl;
    removeChar2(sFun , "Rajasthan is a Wonder",0);
    return 0;
}