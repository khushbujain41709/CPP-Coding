// Leetcode - 119
#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex) {
    vector<vector<int>> v;
    for(int i = 0;i<=rowIndex;i++){
        vector<int> v1(i+1);
        v.push_back(v1);
        long long int curr = 1;   // if used int as data type then at rowIndex = 30 code is not workable gives negative values ..That's why using long long int
        for(int j = 0;j<=i;j++){
            v[i][j] = curr;
            curr = curr*(i-j)/(j+1);
        }
    }
    return v[rowIndex];
}
int main(){
    int num;
    cout<<"Enter number of lines in Pascal triangle : ";
    cin>> num;
    vector<int> v;;
    v = getRow(num);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}