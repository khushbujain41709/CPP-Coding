/*
// Advantages of 2D vector over array
// we can increase rows
// we can have variable columns for example - we have 1 column for 1st row , 2 columns for 2nd row , three columns for 3rd row and 2 columns for 4th row.
// 2d vector is a vector of vectors.
// Passing 2d array in a function is a problem as we have to give size.
*/

/*
// Declaration of 2d vector 
    1)vector<vector<int>> v;
    2)vector<vector<int>> v(m);   where m is 2d vector size
    3)vector<vector<int>> v(m,vector<int> (n)); where m is 2d vector size and n is size of each 1d vector
    4)vector<vector<int>> v(m,vector<int> (n,k)); where m is 2d vector size and n is size of each 1d vector with each element as k (initialization).

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> v = {{1,2},{3,4,5,6,7,8},{9,10,11,12}};

    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;  // varaible columns
    cout<<endl;

    vector<int> v1;
    v1.push_back(100);
    v1.push_back(500);
    v1.push_back(700);
    vector<int> v2;
    v2.push_back(200);
    v2.push_back(400);
    vector<int> v3;
    v3.push_back(300);
    v.push_back(v1);    // in 2d vector we can push_back vectors but we can't push_back numbers to 2d vector... like v.push_back(240); -> error
    v.push_back(v2);
    v.push_back(v3);
    cout<<"See variable columns : "<<endl;
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<v[1][2]<<endl;
    cout<<v[0][10]<<endl;    // invalid
    return 0;
}