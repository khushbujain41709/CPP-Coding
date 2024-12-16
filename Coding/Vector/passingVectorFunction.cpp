// Vectors are passed by value.Each time you pass,new vector is created.
// Using & ampercent we can do pass by reference in vector
#include<iostream>
#include<vector>
#include<algorithm>   // to use sort function
using namespace std;
void change(vector<int> a){   // pass by value(not as array)
    a[0] = 100;
    for(int i = 0;i<a.size();i++){    // we can find size of vector inside function but in array we can't.
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void changeRef(vector<int>& a){   // pass by reference
    a[0] = 100;
}
int main(){
    vector<int> v;
    v.push_back(1);  
    v.push_back(92);   
    v.push_back(322);   
    v.push_back(4);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    changeRef(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}