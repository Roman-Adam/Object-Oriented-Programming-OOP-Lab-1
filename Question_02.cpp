//Question 02:
// Create a class Rectangle with length and width. Add a function to calculate and display area. 
//Answer:

#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length, width;

    void input()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    void area()
    {
        cout << "Area = " << length * width << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.area();

    return 0;
}
