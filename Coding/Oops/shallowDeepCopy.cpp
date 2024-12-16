// Copy which is not independent is known as shallow copy as obj1 = 10,20 and obj2 = obj1.This means that obj2 = 10,20 as they are pointing to same memory location.If obj1 is set to 30,20 then obj2 will also be set to 30,20.
// In case of deep copy , obj2 is given new memory space and obj1 values are copied to obj2. So,obj1 = 10,20.This means that obj2 = 10,20.If obj1 is set to 30,20 then obj2 will be 10,20.
// To avoid shallow copy,we use copy constructor.
/*

Bike b1(20,35);
Bike b2;
b2 = b1;   // shallow copy

Bike b1(20,35);
Bike b2 = b1; // deep copy and there is operator overloading of =(equal to)
or
Bike b2(b1);  // deep copy using call by reference.

*/