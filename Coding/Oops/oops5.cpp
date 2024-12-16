// Inheritance - A class inherits the properties of another class.
// It is used for code reusability.
// public mode - can be accessed from anywhere
// protected mode - they can be accessible in their own class , parent class and derived class.
// private mode - they are accessible in own class.

class Parent{
public:     // can be accessible from outside and can be inherited
    int z;
private:    // can't be accessible from outside and can't be inherited
    int x ;
protected:  // can't be accessible from outside and can be inherited
    int y ;

};
class child1 :public Parent{
    // z will remain public
    // y will remian protected
    // x will not be accessible
};
class child2 :private Parent{
    // z will remain private
    // y will remian private
    // x will not be accessible
};
class chil31 :protected Parent{
    // z will remain protected
    // y will remian protected
    // x will not be accessible
};
int main(){
    Parent p; // If child constructor is called then parent constructor will be called first(before child) , even if it is not formed as it is always created in backend.
    p.z;
}