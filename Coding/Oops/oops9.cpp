//Runtime polymorphism
// It is resolved at runtime
// done using function overriding
// function overriding occurs when child class defines a function of parent class
// we use virtual keyword for function overridding
// function name and parameter both should be same 
#include<iostream>
using namespace std;
class P{
    public:
        virtual void print(){             // function overriding
            cout<<"parent class"<<endl;
        }
        void show(){
            cout<<"parent class"<<endl;
        }
};
class C:public P{
    public:
        void print(){
            cout<<"child class"<<endl;
        }
        void show(){
            cout<<"child class"<<endl;
        }
};
int main(){
    P *p;   // pointer
    C c;
    p = &c;
    p->print();
    p->show();
    // a-> b means (*a).b
}