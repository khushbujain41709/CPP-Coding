#include<iostream>
using namespace std;
class Person{
    private :
        int height;
        int weight;
    public:
        void set_data(int h , int w){
            height = h ;
            weight = w;
        } 
        void check_health(){
            if (weight <height/2.5){
                cout<<"Underweight";
            }
            else if (height / 2.3<weight){
                cout<<"Overweight";
            }
            else if (height / 2.5<= weight<= height/2.3 ){
                cout<<"Normal";
            }
        }   
};
int main(){
    Person p1;
    p1.set_data(143 , 57);
    p1.check_health();
}