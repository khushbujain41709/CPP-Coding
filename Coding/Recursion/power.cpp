#include<iostream>
using namespace std;
int power(int a , int b){
    if(b==0 && a==0){
        cout<<"Indeterminant"<<endl;
        return -1;
    }
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
// Time complexity = O(2b) ~ O(b) as b times function is called and b times returned and space complexity = O(b) stack frames.
// But iterative solution have time complexity = O(b) (faster) and space complexity = O(1).
int main(){
    cout<<power(2,-2)<<endl;
    return 0;
}