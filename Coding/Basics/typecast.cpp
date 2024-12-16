// Leetcode - 2678
#include<iostream>
#include<vector>
using namespace std;
int countSeniors(vector<string>& details) {
    int count = 0;
    for(int i = 0;i<details.size();i++){
        char first_digit = details[i][11];
        char second_digit = details[i][12];
        if((first_digit*10 + second_digit) > 60){
            int age = (first_digit - '0')*10 + (second_digit - '0');  // char to int
            if(age > 60) count ++;
        }
    }
    return count;
}
int main(){
    return 0;
}