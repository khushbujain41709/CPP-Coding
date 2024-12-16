// Operator overlaoding - happens in compile time 
// See example in oops11.cpp

// Operators which cannot be overloaded - .(Dot operator or memebership access operator) , :: (scope resolution operator) , ?.(Ternary operator) , sizeof 
# include<iostream>
using namespace std;
class C{                // class
    public:
        int real;
        int img;
    C(int x , int y){  // constructor
        real = x;
        img = y;
    }
    C operator+ (C &c){ // function for operator overloading with special keyword - operator+ and always pass by reference
        C answer(0 , 0);  // Initializing answer 
        answer.real = real + c.real; 
        answer.img = img +c.img;
        return answer;
    }
    C add(C & c1){
        C c3(0,0);
        c3.img = this->img + c1.img;
        c3.real = this->real + c1.real;
        return c3;
    }
};
int main(){
    C c1(2,4);
    C c2(4,7);
    C c3 = c1+c2;  // c2 is passed for operator loading.
    cout<<c3.real << " + i "<< c3.img<<endl;

    C c4 = c2.add(c1);
    cout<<c4.real << " + i "<< c4.img<<endl;

    C c5 = c1+c2+c3;
    cout<<c5.real << " + i "<< c5.img<<endl;
    return 0;
}