#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int i ){
    if(i == v.size()){
        return;
    }
    cout<<v[i]<<" ";
    display(v,i+1);
}
int main(){
    vector<int> v = {1,63,5,32,54,33};
    display(v,0);
    cout<<endl;
    for(int i : v){   // for each loop
        cout<<i<<" ";   
    }
    return 0;
}