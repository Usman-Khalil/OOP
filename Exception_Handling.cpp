// An exception is the unexpected problem that accurred during the execution of the program;
// and our program terminates suddenly with some error and issues. Exception occurrs during the running of the program;

// The try keyword represents the block of code that may throw an exception placed inside the try block;
// It is followed by the one or more catch blocks.

//  The catch block represents the code that is executed when the particular exception  is thrown by the try block;
// The code to handle the exception is written inside the catch block

// An exception in cpp can be thrown through the throw keyword .
// When  the program encounters a throw statement it immediatley terminates the current function and start finding a 
// matching catch block to handle the exception.

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accNo , balance;

    public:

    Customer(string name , int balance , int accNo)
    {
        this->name = name ;
        this->balance = balance;
        this->accNo = accNo;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount Rs. " << amount << " has been credited successfully." << endl;
        }
        else
        {
            throw runtime_error("Amount should be grater than 0.\n") ;
        }
    }

    void withdraw(int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount Rs. " << amount << " has been debited successfully.";
        }
        else if(amount <= 0)
            throw runtime_error("Amount should be greater than 0.\n") ;
        else
            throw runtime_error("Your current balance is lower than what you want to withdraw.\n");
    }
};

int main()
{
    Customer C1("Usman" , 1000 , 8906);
    try
    {
        C1.deposit(0);
        C1.withdraw(90);
    }
    catch(const runtime_error &e)
    {
        cout << "Exception Occurred : " << e.what() << endl;
    }
    return 0;
}