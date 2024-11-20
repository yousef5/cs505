#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// =================================



//? pointer with classes

//! by default all members of class are private


class StudentClass {
    char name[30];
    double GPA;
    int sID;
    char grade;

public:

    void setStudent(char n[], double g, int id, char gr) {
        strcpy(name, n);
        GPA = g;
        sID = id;
        grade = gr;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Student ID: " << sID << endl;
        cout << "Grade: " << grade << endl;
    }
};


//? pointer with struct

//! by default all members of struct are public
// struct StudentStruct {
//     char name[30];
//     double GPA;
//     int sID;
//     char grade;
// };


//? -> operator called access member of pointer to struct or class object
int main()
{

    StudentClass student1;
    StudentClass *ptr1;

 ptr1 = &student1;

 ptr1->setStudent("John Doe", 3.5, 12345, 'A');

    ptr1->displayStudent(); 

    return 0;
}