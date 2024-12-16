#include<iostream>
// Using Recursion and call stack . Hence stack implementation.
using namespace std;  // aux_rod - aixillary - left one rod
void towerOfHanoi(int n , char from_rod,char to_rod,char aux_rod){
    if(n==1){
        cout<<"\nMove disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod , to_rod);
    cout<<"\nMove disk "<<n<<" from rod "<<from_rod <<" to rod "<<to_rod<<endl;
    towerOfHanoi(n-1,aux_rod , to_rod, from_rod);
}
int main(){
    int num;
    cout<<"Enter the number of disc : ";
    cin>>num;
    cout<<"Number of rod is fixed is 3"<<endl;
    char A,B,C;
    cout<<"Let rod A be initial rod having "<< num<<" rings and rod C is final rod where we want to copy rings and rod B is auxillary rod.";
    towerOfHanoi(num,'A','C','B');
    return 0;
}