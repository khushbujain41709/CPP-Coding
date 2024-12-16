#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;

    vector<int> v1(5);
    cout<<"Size is : "<<v1.size()<<endl;   // size is 5 , even if there is no element in the formed array of 5 elements and this array has 5 elements all initialized to value 0 
    cout<<"Capacity is : "<<v1.capacity()<<endl;
    cout<<v1[3]<<endl;

    vector<int> v2(5,7);  // initial size = 5 and each element has value 7.
    cout<<"Size is : "<<v2.size()<<endl;
    cout<<"Capacity is : "<<v2.capacity()<<endl;
    cout<<v2[3]<<endl;
    return 0;
}
