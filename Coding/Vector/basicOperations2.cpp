#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  //Size Capacity
    v.push_back(1);   // 1 1
    v.push_back(2);   // 2 2
    v.push_back(3);   // 3 4
    v.push_back(4);   // 4 4
    v.push_back(5);   // 5 8
    v.push_back(6);   // 6 8
    v.push_back(7);   // 7 8
    v.push_back(8);   // 8 8
    v.push_back(9);   // 9 16
    v.push_back(10);  // 10 16
    v.push_back(11);  // 11 16
    v.push_back(12);  // 12 16
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    cout<<" Size is : "<<v.size()<<endl;
    cout<<" Capacity is : "<<v.capacity()<<endl;
    for(int i = 0;i<v.size();i++){   // after pop_back() size changes automatically but capacity remains same.
        cout<<v[i]<<" ";
    }
    return 0;
}