// Leetcode - 60 Hard
// The set [1, 2, 3, ..., n] contains a total of n! unique permutations.Given n and k, return the kth permutation sequence.
#include<iostream>
#include<vector>
#include<string>
// This code gives Time Limit Exceeded in Leetcode.
using namespace std;
void permute1(string original , string neww , vector<string>& v){
    if(original == ""){
        v.push_back(neww); // push_back in ascending order
        return;
    }
    for(int i = 0;i<original.size();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permute1(left+right , neww+ch,v);
    }
}
string getPermutation1(int n, int k) {
    string s;
    for(int i = 1;i<=n;i++){
        s += to_string(i);
    }
    vector<string> v;
    permute1(s,"",v); 
    return v[k-1];
}
// ---------------------------------------------------------------------------------------

// For n = 4 we have 4! permutations starting from 1,2,3 and 4. Number starting from 1 is (n-1)! = 3! = 6 , same 6 for 2 . 6 for 3 and 6 for 4. So , 6+6+6+6 = 24 numbers.
// fact = (n-1)! 
// if(k%fact != 0) index = k/fact
// if(k%fact == 0) index = k/fact - 1
// if(k % fact == 0) then k = fact
// if k > fact or k < fact  then k = k % fact
string helper(string original , int k , string ans){
    int n = original.size();
    if(n == 0){
        return ans;
    }
    // finding factorial of (n-1)
    int fact = 1;
    for(int i = 2;i<=n-1;i++){
        fact *= i;     // (n-1)!
    }
    // for finding value of index
    int index = k/fact;
    if(k % fact == 0) index--;
    char ch = original[index];
    // for modifying original string
    string left = original.substr(0,index);
    string right = original.substr(index + 1);
    // for finding value of k
    int q = 1;
    if(k % fact == 0) q = fact;   // k = fact
    else q = k % fact;
    return helper(left+right , q , ans+ch);
}
string getPermutation(int n, int k) {
    string s = "";
    for(int i = 1;i<=n;i++){
        s += to_string(i);
    }
    return helper(s,k,"");
}
int main(){
    int n = 4;
    int k = 9;
    string s = getPermutation(n,k);
    cout<<s<<endl;
    return 0;
}