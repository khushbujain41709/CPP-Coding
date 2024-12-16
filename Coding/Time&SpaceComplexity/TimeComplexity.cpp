// Time complexity ka hardware se koi lena dena nahi hai.
// Hence time complexity is studied in same machine otherwise better spped processor will take less time to execute.
// No.of iterations is noo.of operation performed or number of times i is changing.

// Notations for different types of time complexity
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){    // Time complexity - O(n) because of n iterations or rounds
        cout<<"PW"<<endl;
    }

    for(int i = 0;i<n;i+=2){    // Time complexity - O(n) as O(n/2) ~ O(n) because of n/2 iterations or rounds
        cout<<"PW"<<endl;
    }

    //  O(kn) ~ O(n)
    //  O(n+k) ~ O(n)
    //  O(n-k) ~ O(n)
    //  O(k1*n^m + k2*n^m-1 + k3*n^m-2) ~ O(n^m) -> Example - O(6n^2 + n) ~ O(n^2)
    //  O(11n^13/2 + n^4) ~ O(n^13/2) we can't approxiamate powers

    int m;
    cin>>m;
    int a[n],b[m];
    for(int i = 0;i<n;i++){      // n iterations or rounds
        a[i]++;
    }
    for(int i = 0;i<m;i++){     // m iterations or rounds
        b[i]++;
    }
    // so Time complexity is O(m+n) as both m and n is variable as unknown.

    for(int i = 0;i<n;i++){      // n iterations or rounds
        for(int i = 0;i<n;i++){      // n iterations or rounds
            cout<<"Pw"<<endl;
        }
    }
    // so Time complexity is O(n^2).

    for(int i = 0;i<n;i++){      // n iterations or rounds
        for(int j = i+1;i<n;i++){ 
            cout<<"Pw"<<endl;
        }
    }
    // so Time complexity is O(n^2).

    for(int i = 0;i<n;i++){      // n iterations or rounds
        for(int j = 0;j<m;j++){      // m iterations or rounds
            cout<<"Pw"<<endl;
        }
    }
    // so Time complexity is O(n*m).

    int c = 0;
    int k ;
    for(int i = 0;i<n;i*=k){  //->1,k,k^2,k^3,k^4,....,k^x.
        c++;                  // Now , k^x > n the loop will break. Now k^x>n ~ k^x = n
    }                         // Now , x = log n to base k.
    // so Time complexity is O(log n to the base k) . Sometimes k is ignored , so O(log n).
    // This is logarithmic time complexity.
    
    // log n < n < n^2 so O(n^2) > O(n) > O(log n)

    int c = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<m;j++){   // m>n
            c++;
        }                  
    } 
    // Time complexity is - O(n*m - n^2) which is approxiamated to O(n*m) as m>n.
    return 0;
}