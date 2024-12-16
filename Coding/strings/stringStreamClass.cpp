// fetching words from a sentence.
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string  : ";
    getline(cin,str);
    stringstream ss(str);     // ss ko puri str string dedo
    string temp;
    while(ss>>temp){         // ss m se input lelo,aut temp m daal do
        cout<<temp<<endl;
    }
    return 0;
}