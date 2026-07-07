//Question 06:
// Create a class Person with name and age.
// Add a method to Check if the person is eligible to vote.

//Answer:

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void checkVote()
    {
        if (age >= 18)
            cout << name << " is Eligible to Vote." << endl;
        else
            cout << name << " is Not Eligible to Vote." << endl;
    }
};

int main()
{
    Person p;

    p.input();
    p.checkVote();

    return 0;
}