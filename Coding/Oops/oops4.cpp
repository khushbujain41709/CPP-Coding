// Encapsulation - Binding of methods and variables together into a single unit called as class.
// It ensures that data is accessible from the class methods only.
// It also leads to data abstraction (hiding of data).That's why class is known as abstract data type.

// Abstraction - It enables us to display only essential information while hiding implementation details.
#include<iostream>
using namespace std;
class Train{
    float fare; // since this x is private data hence it cannot be accessed directly but can be acccesed using public data function.
    public:
        void set(float x){
            fare = x;
        }
        float get(){
            return fare;
        }
};
int main(){
    Train Rajdhani_Express;
    Rajdhani_Express.set(627.5);
    cout<<"Fare of train is : Rs "<<Rajdhani_Express.get()<<endl;
    return 0;
} 