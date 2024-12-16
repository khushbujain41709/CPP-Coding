#include<iostream>
using namespace std;
int main(){
    float sum = 0;
    float marks[10] = {35,63,62,22,42,25,14,89,66,78};
    for(int i = 0 ;i<10;i++){
        sum += marks[i];
        if(marks[i]>35){
            cout<<"The roll no. is : "<<i<<endl;
        }
    }
    cout<<"Sum of marks is : "<<sum<<endl;
    return 0;
}