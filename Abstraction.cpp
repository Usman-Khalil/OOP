#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accNumber;
    int balance;
    static int totalCustomers;
    static int totalBalance;

public:

    Customer(string name, int accNumber, int balance)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->balance = balance;
        totalCustomers++;
        totalBalance = totalBalance + balance;
    }

    void display()
    {
        cout << "Name of the customer is : " << name << endl;
        cout << "Account number of the customer is : " << accNumber << endl;
        cout << "Current Balance of the customer is : " << balance << endl;
    }

    static void displayTotal()
    {
        cout << "Total number of customers are : " << totalCustomers << endl;
        cout << "Total balance available in the bank is  : " << totalBalance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            totalBalance += amount;
            balance += amount;
        }
        else
            cout << "Invalid Amount" << endl;
    }
};

int Customer::totalCustomers = 0;
int Customer::totalBalance = 0;

int main()
{
    Customer C1("Usman", 1984321, 10);
    Customer C2("Ali", 1984322, 100);
    Customer C3("Hassan", 1984323, 1000);
    C1.deposit(-1000);
    C1.display();

    return 0;
}