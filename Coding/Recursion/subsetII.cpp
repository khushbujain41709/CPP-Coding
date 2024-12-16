// Given an integer array nums that may contain duplicates, return all possible subset(the power set).The solution set must not contain duplicate subsets. Return the solution in any order.
// 1) Sort the string using built in function having time complexity of nlogn
// 2) Example - "aba" becomes "aab" after sorting.
// 3) passing "" | "aab" then two calls will be there.
// 4) "a" | "ab" , "" | "ab" where in one a is omitted and in one a is added to string.
// 5) Similarly these sbove two combinations again do same in which one is omitted and other is appended in string .
// 6) Now , "a" | "ab" becomes "aa" | "b" , "a" | "b" and "" | "ab" becomes "a" | "b" , "" | "b".
// 7) Now , "aa" | "b" becomes "aab" | "" , "aa" | "" and  "a" | "b" becomes "ab" | "" , "a" | ""(same)and "a" | "b" becomes "ab" | "" , "a" | "" (same)and "" | "b" becomes "b" | "" , "" | "".
// 8) This process ends when original string abc becomes empty in each case.
// 9) This sets (same) ones needs to be run once, so passing a flag which when true runs and when false doesnot run.
/*10)                                         true(aab)
                            (add first char) /       \ (remove first char)
                                    a|ab , true       false , ""| ab
                                        /   \          /   \
                                 true,aa|b  true,a|b  does  true
                                                      not 
                                                      run 
                                                    
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void subsetsString2(string original,string empty,vector<string>& v , bool flag){
    if(original == ""){
        v.push_back(empty);
        return;
    }
    if(original.length() == 1){  // we are comparing neighbour characters and if only one character is there then no comparison is there so flag = true.
        subsetsString2(original.substr(1),empty,v,true);
        if(flag == true) subsetsString2(original.substr(1),empty+original[0],v,true);
        return;  // imp line , taki niche ki dono conditions na chle.
    }
    char ch = original[0];
    char dh = original[1];
    if(ch == dh){
        subsetsString2(original.substr(1),empty,v,false);
        if(flag == true) subsetsString2(original.substr(1),empty+original[0],v,true);
    }
    else{
        subsetsString2(original.substr(1),empty,v,true);
        if(flag == true) subsetsString2(original.substr(1),empty+original[0],v,true);
    }
}
int main(){
    string str = "aba";
    sort(str.begin(),str.end());
    vector<string> ss;
    subsetsString2(str,"",ss,true);
    for(int i = 0;i<ss.size();i++){
        cout<<ss[i]<<endl;
    }
    return 0;
}