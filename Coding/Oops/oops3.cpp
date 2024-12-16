// Destructor - It is a function that is called when an object goes out of scope.
// Cannot pass any argument
// Name of destructor is ~(class_name)
// 
#include<iostream>
using namespace std;
class Rectangle{
public:
    int l , b ;
    Rectangle(){ //Default constructors - no argument is passed
        l = 0 ;
        b = 0;
    }
    Rectangle(int x , int y){ // Prarmeterized constructor - with arguments passed
        l = x ;
        b = y;
    }
    Rectangle(Rectangle &r){ // Can also be written Rectangle(Rectangle& r)
        l = r.l; // copy construtor - initalizes an object by another existing object(of same class)
        b = r.b;
    }
    ~Rectangle(){  //Destructor .
        cout<<"Destructor is called!"<<endl;
    }
};
int main(){
    Rectangle rect1;
    cout<<rect1.l <<" - "<<rect1.b<<endl;
    Rectangle *rect4 =new Rectangle();
    cout<<rect4->l<<" "<<rect4->b<<endl;
    delete rect4;
    Rectangle rect2(23 , 65);
    cout<<rect2.l <<" - "<<rect2.b<<endl;
    Rectangle rect3(rect2); // Rectangle rect3 = rect2;(can also be written)
    cout<<rect3.l <<" - "<<rect3.b<<endl;
    return 0;
}
