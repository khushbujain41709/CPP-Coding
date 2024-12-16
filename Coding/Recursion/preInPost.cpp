/*
kaam  pre
call
kaam   in 
call
kaam  post
*/
#include<iostream>
using namespace std;
void pip(int n){
    if(n == 0){
        return;
    }
    cout<<"Pre "<<n<<endl;
    pip(n-1);
    cout<<"In "<<n<<endl; 
    pip(n-1);
    cout<<"Post "<<n<<endl;
}
void printZigZag(int n){
    if(n == 0){
        return;
    }
    cout<<n;
    printZigZag(n-1);
    cout<<n; 
    printZigZag(n-1);
    cout<<n;
}
// printZigZag(1) - 111
// printZigZag(2) - 211121112
// printZigZag(3) - 321112111232111211123
// printZigZag(4) - 432111211123211121112343211121112321112111234
int main(){
    cout<<endl;
    pip(3);
    cout<<endl;
    printZigZag(3);
    return 0;
}