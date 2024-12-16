// Constructors - They are used to initialize an object with some values
// This is a function which is called when an object is created.
// This will have the same name as that of class.
// They are of three types  - default constructor , paramaterised constructor and copy constructor.
// They take some argument but return class type.
#include<iostream>
using namespace std;
class Rectangle{
public:
    int l , b ;
    Rectangle(){ //Default constructors - no argument is passed
        l = 0 ;
        b = 0;
    }
    Rectangle(int x , int y = 45){ // Prarmeterized constructor - with arguments passed
        l = x ;
        b = y;
    }
    Rectangle(Rectangle &r){ // Can also be written Rectangle(Rectangle& r)
        l = r.l; // copy construtor - initalizes an object by another existing object(of same class)
        b = r.b;
    }

    Rectangle(int x , int y){ // Rectangle rr = {90,87}; see this line ... send arguments in same order of data types.
        l = x ;
        b = y;
    }

};
int main(){
    Rectangle rect1;
    cout<<rect1.l <<" - "<<rect1.b<<endl;
    Rectangle rect2(23 , 65);
    cout<<rect2.l <<" - "<<rect2.b<<endl;
    Rectangle rect3(rect2); // Rectangle rect3 = rect2;(can also be written)
    cout<<rect3.l <<" - "<<rect3.b<<endl;

    Rectangle rr = {90,87};
    return 0;
}
