//Quetion 03:
//Create a class BankAccount with accountNumber and balance.Add functions to deposit, withdraw, and display balance.
//Answer:

#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    float balance;

    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance\n";
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}