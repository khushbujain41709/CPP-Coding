// oops IS NEEDED TO SOLVE REAL LIFE PROBLEM.

// In procedure oriented programming(pop) main focus is on functions.
// Problems faced due to pop -> 
// 1) Global data can be accessed from any function and it would be difficult to track which function changed data.
// 2) If data structure is changed , functions to be revised.

// In OOPS 
// Main focus is on data.
// Here we bind the data to the functions using it.
// Program is divided into objects and each object has data and functions.
// It protects data from accidental changes. 

// Class is a user defined(abstract) data type.It is a Blueprint(strucutre or dhacha)
// OOPs is a methodology or paaradigm to design a program using classes and objects.
// Abstraction - It enables us to display only essential information while hiding implementation details.
#include<iostream>
using namespace std;
class Student{
public:
    string stu_name;
    int roll_no = 2; // initialization is not recommended as we initialize using constructor.
};
int main(){
    Student Stu1 , Stu2; // object
    Stu1.stu_name = "Aahana Jain";
    Stu1.roll_no = 12;
    Stu2.stu_name = "Drishti Sharma";
    Stu2.roll_no = 27;
    Student *Stu3 = new Student(); // Making new object Stu3 // Pointer is set to Stu3
    Stu3->stu_name = "K Harun"; // we can't access Stu3 using . operator
    Stu3->roll_no = 35;
    cout<<"Names of students are : "<<endl;
    cout<<Stu1.stu_name<<endl<<Stu2.stu_name<<endl<<Stu3->stu_name<<endl;
    cout<<"Roll numbers of students are respectively : "<<endl;
    cout<<Stu1.roll_no<<endl<<Stu2.roll_no<<endl<<Stu3->roll_no<<endl;
    return 0;
}