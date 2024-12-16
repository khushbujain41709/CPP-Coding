// Leetcode - 118
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v(numRows);
    for(int i = 0;i<numRows;i++){
        v[i].resize(i+1);      // imp line without this 1d vector will be formed of zero size and not able to assign values and shows no output or use push_back.
        for(int j = 0;j<=i;j++){
            if(j == 0){
                v[i][j] = 1;
            }
            else if(j == i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j-1]+v[i-1][j];
            } 
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