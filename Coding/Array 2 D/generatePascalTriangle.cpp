// Leetcode - 118
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v;
    for(int i = 0;i<numRows;i++){
        vector<int> v1(i+1);
        v.push_back(v1);
        int curr = 1;
        for(int j = 0;j<=i;j++){
            v[i][j] = curr;
            curr = curr*(i-j)/(j+1);
        }
    }
    return v;
}
int main(){
    int num;
    cout<<"Enter number of lines in Pascal triangle : ";
    cin>> num;
    vector<vector<int>> v;
    v = generate(num);
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}