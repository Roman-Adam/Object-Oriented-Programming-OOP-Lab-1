//Question 07:
//Class Result with marks of 5 subjects.Add Functions to calculate percentage and assign grades.
// Also create array of 5 objects for class to store 5 students data.

//Answer:

#include <iostream>
using namespace std;

class Result
{
public:
    string name;
    int marks[5];
    int total = 0;
    float percentage;

    void input()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        total = 0;

        cout << "Enter Marks of 5 Subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total = total + marks[i];
        }
    }

    void calculate()
    {
        percentage = total / 5.0;
    }

    void grade()
    {
        cout << "\nName: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 80)
            cout << "Grade: A\n";
        else if (percentage >= 70)
            cout << "Grade: B\n";
        else if (percentage >= 60)
            cout << "Grade: C\n";
        else if (percentage >= 50)
            cout << "Grade: D\n";
        else
            cout << "Grade: F\n";
    }
};

int main()
{
    Result s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Data of Student " << i + 1 << endl;
        s[i].input();
        s[i].calculate();
    }

    cout << "\n------ Result ------\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].grade();
    }

    return 0;
}