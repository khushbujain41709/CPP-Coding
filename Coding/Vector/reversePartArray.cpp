#include<iostream>
#include<vector>
using namespace std;
vector<int> reversePart(vector<int> &v , int start , int end){
    for (int i = start;i<=(start+end)/2;i++){
        swap(v[i] , v[end+start-i]);
    }
    return v;
}
/* This can also be used.....
    vector<int> reversePart(vector<int> &v , int i , int j){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    }
    */
int main(){
    int size , a , b;
    vector<int> v;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter starting index : ";
    cin>>a;
    cout<<"Enter ending index : ";
    cin>>b;
    reversePart(v,a,b);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}