// When a function of a base class is redefined in it's derived class then it is called function overriding.
#include<iostream>
using namespace std;
class A{
public:     
    char x;
    virtual void show(){
        cout<<"I am A"<<endl;
    }
};
class B :public A{
public :
    bool y;
    void show(){
        cout<<"I am B"<<endl;  // B has both show A'show() inheritred and B show() but it calls B'show() as it overrides A'show().
    }
};
class C :public B{
public :
    int z;
    void show(){
        cout<<"I am C"<<endl; 
    }
};
int main(){
    B b;
    b.A::show();
    b.show();

    // parent pointer can store child object address.
    A *ap;
    B bb;
    ap = &bb;
    ap->show();  // Pointer of A but stores address of B. Calls show() of A because of compile time binding.This can be resolved when we use virtual keyword in show() of A because of run time binding.

    ap = new B;
    ap->show();

    ap = new A;
    ap->show();

    B* bp;
    C c;
    bp = &c;
    bp->show(); // correct without virtual as one virtual in parent can do virtual in all child multilevel inheritance.

    A a1;
    B b1;
    cout<<sizeof(a1)<<endl; // 8 instead of 1 beacuse of virtual
    cout<<sizeof(b1)<<endl; // 8 instead of 2 beacuse of virtual
    // This is because in background vptr(virtual pointer) and vtable(virtual table) is made.vptr finds vtable and vtable stores virtual function.This helps in run time binding as vtable is called before when we call virtual function.
    //Each class has a vtable and each object has its own vptr.
}