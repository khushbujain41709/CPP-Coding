// Q - FIND THE LAST OCCURENCE OF x IN THE ARRAY.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size , index , x;
    cout<<"Enter size of vector : ";
    cin>>size;
    for(int i = 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the element : ";
    cin>>x;
    for(int i = v.size()-1 ; i>=0;i--){
        if(v.at(i) == x){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout<<"The element occurred last time at index : "<<index<<endl;
    } 
    else {
        cout<<"The element was not found in the vector."<<endl;
    }
    cout<<endl;
    return 0;
}