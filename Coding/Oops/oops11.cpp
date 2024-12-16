// Operator Overloading Example
#include<iostream>
using namespace std;
class Person{
    public:
    int feet , inch;
    
        Person(int x , int y){
            feet = x;
            inch = y;
    }
    Person operator- (Person &p){
        int DiffHeight = feet - p.feet; //1
        int DiffHeight2 = inch - p.inch; // -7
        if (DiffHeight2<0){
            DiffHeight --;
            DiffHeight2 += 12;
        }
        return Person (DiffHeight , DiffHeight2);
    }
};
int main(){
    Person p1(5,2);
    Person p2(4,9);
    Person P = p1 - p2;
    cout<<P.feet <<" feets and "<<P.inch<<" inches.";
    return 0;
}