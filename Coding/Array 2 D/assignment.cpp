#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //question 1
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int sum =0 ;
    if(r1<r2){
    for(int i = r1;i<=r2;i++){
        for(int j = c1;j<=c2;j++){
            sum += arr[i][j];
        }
    }
    }
    else if(r1>r2){
        for(int i = r2;i<=r1;i++){
            for(int j = c1;j<=c2;j++){
                sum += arr[i][j];
        }
    }
    }
    cout<<sum;
    // question 2
    int maxSum = 0;
    int maxRow = -1;
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = 0;j<m;j++){
            sum += arr[i][j];
            if(sum >= maxSum){
                maxSum = sum;
                maxRow = i;
            }
        }
    }
    cout<<maxRow;
    // question 3
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if( i == j|| j + i == n-1){
                cout<<arr[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    // question 4
    for(int j = 0;j<m;j++){
        if(j%2 == 0){
            for(int i = n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }    
        }
        else{
            for(int i = 0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}