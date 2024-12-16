#include<iostream>
#include<vector>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int Original_num = number;
    int count = 0;
    vector<int> v;
    while(number > 0){  
        count++;
        number /= 10;
    }
    if (Original_num ==0){
        cout<<"No. of digit is 1." <<endl;
    }
    else{
        cout<<"No. of digits are : "<<count<< endl;
    }
    return 0;
}