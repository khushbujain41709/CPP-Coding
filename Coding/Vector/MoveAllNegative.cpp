#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i] > 0){
            i++;
        }
        if(v[j]<0){
            j--;
        }
        else if(v[i] < 0 && v[j] > 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
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