// Pattern - Star Cross  - This will print star
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i = 1 ; i <= row; i++){
        for(int j = 1 ; j <= row; j ++){
            if(i == j || i+j == (row+1) ){
                cout<<'*'<<" ";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}
// #include<iostream>   - This will print diagonals but one after other and hence needs intersection || .
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter row : ";
//     cin>>row;
//     for(int i = 1 ; i <= row; i++){
//         for(int j = 1 ; j <= row; j ++){
//             if(i == j){
//                 cout<<'*'<<" ";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
//     for(int i = 1 ; i <= row; i++){
//         for(int j = 1 ; j <= row; j ++){
//             if(i+j == row+1){
//                 cout<<'*'<<" ";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
// }

