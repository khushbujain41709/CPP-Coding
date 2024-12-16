// Array has fixed size . Vector is a dynamic array.
// Vector makes new array in the memory of capacity twice the given array when array is full.
// For inserting and taking input don't use square bracket[]
// For updating , printing and accessing elements we can use []
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;   // we don't need to mention size
    v.push_back(5);  // inserting element in v array(vector)
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // v[0] = 7;    // This will generate error or segmentation fault or show nothing.
    // v[1] = 8;
    // v[2] = 4;
    // v[3] = 0;
    v[0] = 88;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<endl;

    vector<int> v1;  
    v1.push_back(5);  
    v1[1] = 6;
    v1.push_back(2);
    v1.push_back(19);
    v1[0] = 88;
    cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<" "<<v1[3]<<" "<<endl;
    // v1[3] is a garbage value when output is printed because v1[1] given doesnot twice the capacity of array and hence it will be ignored and after 88 -> 2 -> 19 will be printed and according to doubling capacity of vector one garbage value will be alloted.
    return 0;
}