#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// printing max
void maxValue(vector<int> &v , int i , int max ){
    if(i == v.size()){
        cout<<max<<endl;
        return;
    }
    if(max<v[i]){
        max = v[i];
    }
    maxValue(v,i+1,max);
    return;
}
// storing max in a variable and returning it
int storeMax(vector<int>& v , int i){
    if(i == v.size()){
        return INT_MIN;
    }
    return max(v[i] , storeMax(v,i+1));
}
int main(){
    vector<int> v = {1,60,5,32,54,33};
    maxValue(v,0,INT_MIN);
    cout<<storeMax(v,0);
    return 0;
}