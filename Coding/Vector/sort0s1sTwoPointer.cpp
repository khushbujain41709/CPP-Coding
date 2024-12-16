// sort an array of 0s and 1s without using vector sort function
// This is a two pointers(varibles) method and traverses in only in a single loop.
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    // if only used if loop then show wrong result for 1 1 0 1 0 1 1 0 without using break statement....
    // without using break statement we can simply use this case v[i] == 1 && v[j] == 0 above both the other cases..
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i] == 0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(i>j){
            break;
        }
        if(v[i] == 1 && v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    /*
    while(i<j){
        if(v[i] == 0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        else if(v[i] == 1 && v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    */

    /*
    while(i<j){
        if(v[i] == 1 && v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        if(v[i] == 0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
    }
    */
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