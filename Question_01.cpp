//Question:
//Create a class Student with attributes: name, rollNo, marks.Add functions to input and display student details. 


#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}