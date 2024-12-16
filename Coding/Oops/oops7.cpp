// Ability of objects and methods to take different forms is known as polymorphism.
//  It is of two types - compile time polymorphism and run time polymorphism.
// Compile time polymorphism can be seen by function overloading and operator overloading.

// In function overloading - we define a number of function with same function name but they perform differently according to the arguments passed.

#include<iostream>
using namespace std;
class Shape{
    public:
        void area(float r){
            float area = 3.14*r*r;
            cout<<"Area of circle ";
            cout<<area;
        }
        void area(float r , float l){
            float area = 2*3.14*r*(r+l);
            cout<<"Area of cylinder ";
            cout<<area;
        }
        void area(int r){
            int area = r*r;
            cout<<"Area of sqaure ";
            cout<<area;
        }
};
int main(){
    Shape s;
    s.area(3 , float(9.2));
    cout<<endl;
    s.area(8.24f); // f reperesents float
    cout<<endl;
    s.area(7);
}