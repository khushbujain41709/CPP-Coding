#include<iostream>
using namespace std;
class Big{
    public:
        Big(){
            cout<<"This is Parent constructor."<<endl;
        }
};
class Small : public Big{
    public:
        Small(){
            cout<<"This is Child constructor which will get printed later."<<endl;
        }
};
class Multi_Child : public Big , public Small{
    public:
        Multi_Child(){
            cout<<"This class is inheriting from two parent classes."<<endl;
        }
};
int main(){
    Small s1;
    cout<<"---------------------------------------"<<endl;
    Multi_Child m1;
    return 0 ;
}