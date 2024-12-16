#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> &v){
    for (int i = 0;i<v.size()/2;i++){
        swap(v[i] , v[v.size()-i-1]);
    }
    return v;
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
    cout<<endl;
    /* This can also be used.....
    int i = 0;
    int j = v.size() -1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    */


   /* Or we can use this too...
   for(int i = 0 ,j = v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
   }   
   */

  // Or we can use reverse function of vector..
  // reverse(v.begin(),v.end());
    reverse(v);
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}