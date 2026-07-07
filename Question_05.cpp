//Question 05:
//Create a class Car with brand, model, price.Display the details of the car.
//Answer:

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    float price;

    void input()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nCar Details\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Car c;

    c.input();
    c.display();

    return 0;
}