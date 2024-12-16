#include<iostream>
#include<vector>
// we can also use i+j = size - 1 formula so set j till size -1 -i . Set v2[i] = v1[j] . Iterate i till 0 to v1.size()-1 .
using namespace std;
vector<int> reverse(vector<int> &v , vector<int> &rev){
    for (int i = v.size(); i >=0; i--){
        int y = v[i];
        rev.push_back(i);
    }
    return rev;
}
int main(){
    int size;
    vector<int> v,res;
    cout<<"Enter number of elements in vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    res = reverse(v,res);
    for(int i = 0;i<size;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}