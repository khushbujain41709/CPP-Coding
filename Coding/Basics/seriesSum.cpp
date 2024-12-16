// 1 + (1+2) + (1+2+3) + (1+2+3+4) + ..... + (1+2+3+4+.....+n) 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number till you want to add series : ";
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i++){    // outer loop for row
        int tem_sum=0;
        for(int j =1 ;j<= i;j++){   // inner loop for temporary sum
            sum += j;
            tem_sum += j;
            cout<<j;
            if(j< i){
                cout<<"+";
                //cout<<j;
            }
        }
    //  sum += tem_sum;
        cout<<" = "<<tem_sum<<endl;
    }cout<<"Total sum is : "<<sum;
    return 0;
}