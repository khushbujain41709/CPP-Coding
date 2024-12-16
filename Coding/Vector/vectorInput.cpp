#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);  // without giving size it will give segmentation error.
    cout<<"Enter elements : ";
    for(int i = 0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Vector is : ";
    for(int i = 0;i<6;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    vector<int> vec1;
    for(int i = 0;i<6;i++){
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    for(int i = 0;i<6;i++){
        cout<<vec1[i]<<" ";
    }
    return 0;
}