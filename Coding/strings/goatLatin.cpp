// Leetcode - 824
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string toGoatLatin(string sentence) {
    stringstream ss(sentence);
    string temp;
    int count = 0;
    string result;
    while(ss >> temp){
        count ++;
        if(temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i'|| temp[0] == 'o' || temp[0] == 'u' || temp[0] == 'A' || temp[0] == 'E' || temp[0] == 'I'|| temp[0] == 'O' || temp[0] == 'U'){
            temp = temp + "ma";
        }
        else{
            temp = temp.substr(1) + temp[0] + "ma";
        }
        // imp
        temp += string(count, 'a');
        if (!result.empty()) {
            result += " ";
        }
        result += temp;
    }
    return result;
}
int main(){
    string s = "I speak Goat Latin";
    cout<<toGoatLatin(s);
    // Output should be "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
    return 0;
}