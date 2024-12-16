// Friend function
// they are non member function which can access private members of the class.
#include<iostream>
using namespace std;
class A{
    int x;
    int z;
    public:
        A(int y){ // constructor
            x = y;
        }
        friend void print(A &obj);  // an object is always given to a friend function
        friend class primeNumber;  // friend class
};
void print(A &obj){  // private memebers can be accessed from outside class using friend fucntion.
    cout<<obj.x<<endl;
}
class primeNumber{
    public:
    void show(A &a){
        a.z = 100;
        cout<<a.z <<" " << a.x <<endl;
    }
};
int main(){
    A ojj(74);
//    cout<<obj.x<<endl;  SINCE X IS PRIVATE MEMBER.
    print(ojj);

    A obj(76);
    primeNumber p;
    p.show(obj);
}