// When two instances of base classes are present in the derived class.
// B derives A , C derives A , Now D derives B and C . Now, D has two instances of A.
// To resolve this we need to use scope resolution operator :: or virtual keyword
#include<iostream>
using namespace std;
class A{
public:     
    int x;
};
class B :public A{
public :
    int y;
};
class C :public A{
public:
    int z;
};
class D :public B , public C {
public:
    int s;
    void show(){
        // cout<< x; This is ambiguous
        cout<<B :: x <<endl;
    }
};
int main(){
    D d;
    d.show();
}
/*
class A{
public:     
    int x;
};
class B : virtual public A{
public :
    int y;
};
class C : virtual public A{
public:
    int z;
};
class D :public B , public C {
public:
    int s;
    void show(){
        cout<<x <<endl;
    }
};
int main(){
    D d;
    d.x = 13;
    d.show();
}
*/