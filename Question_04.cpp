//Question 04:
//Create a class Calculator.Add functions for addition, subtraction, multiplication, and division.
//Answer:

#include <iostream>
using namespace std;

class Calculator
{
public:
    float a, b;

    void input()
    {
        cout << "Enter Two Numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero not possible." << endl;
    }
};

int main()
{
    Calculator c;

    c.input();

    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}