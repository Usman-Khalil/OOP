#include <iostream>
using namespace std;

class Customer
{
   string name;
   int accountNumber;
   int balance;
public:

   // Parametrized Constructor with this pointer;
   Customer(string name, int accountNumber, int balance)
   {
       this -> name = name;
       this -> accountNumber = accountNumber;
       this -> balance = balance;
   }

   void display()
   {
       cout << name << endl;
       cout << accountNumber << endl;
       cout << balance << endl;
   }
};

int main()
{
   Customer A1("Usman", 1329, 20);
   A1.display();
   return 0;
}