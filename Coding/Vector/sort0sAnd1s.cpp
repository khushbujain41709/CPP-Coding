// sort an array of 0s and 1s without using vector sort function
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int nzero = 0;  // count of number of zeros
    int none = 0;  // count of number of ones
    for(int i = 0;i<v.size();i++){
        if(v[i] == 0){
            nzero ++;
        }
        else{
            none++;
        }
    }
    for(int i = 0;i<v.size();i++){
        if(i<=nzero-1){
            v[i] = 0;
        }
        else if(i>nzero-1 and i<v.size()){
            v[i] = 1;
        }
    }
    return;
}
int main(){
    int size;
    vector<int> v;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}