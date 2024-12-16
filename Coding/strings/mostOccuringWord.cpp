#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "Khushbu Jain is a student. She is a future Engineer!";
    string temp;
    stringstream ss(str);
    vector<string> v;
    //1) filling vector
    while(ss>>temp){
        v.push_back(temp);
    }
    //2) Now sort the vector
    sort(v.begin(),v.end());
    //3) checking neighbours and finding frequency of most occuring element
    int maxx = 1;
    int count = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1]){    // since we are comparing i with i-1 so starting loop from i = 1 so that i-1 will be 0
            count++;
        }
        else{
            count = 1;
        }
        if(count>maxx){   // can also be written as maxx = max(maxx, count);
            maxx = count;
        }
    }
    //4) finding most occuring word
    count = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1]){    // since we are comparing i with i-1 so starting loop from i = 1 so that i-1 will be 0
            count++;
        }
        else{
            count = 1;
        }
        if(count==maxx){   // can also be written as maxx = max(maxx, count);
            cout<<maxx<<" "<<v[i]<<endl;
        }
    }
    return 0;
}