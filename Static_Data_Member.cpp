#include <iostream>
using namespace std;

class Customer
{
   string name;
   int accNumber;
   int balance;
public:

   static int totalCustomers;
   static int totalBalance;

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

   void displayTotal()
   {
       cout << "Total number of customers are : " << totalCustomers << endl;
       cout << "Total balance available in the bank is  : " << totalBalance << endl;
   }
};

int Customer::totalCustomers = 0;
int Customer::totalBalance = 0;

int main()
{
   Customer C1("Usman", 1984321, 10);
   Customer C2("Ali", 1984322, 100);
   Customer C3("Hassan", 1984323, 1000);
   Customer C4("Ammad", 1984324, 10000);
   Customer C5("Khawar", 1984325, 100000);
   Customer C6("Subhan", 1984326, 1000000);
   Customer C7("Ahmad", 1984327, 10000000);
   Customer C8("Miraj", 1984328, 100000000);
   Customer C9("Muneeb", 1984329, 1000000000);
   cout << Customer::totalCustomers << endl;  // Static member of the class can be accessed without object by using this syntax;
   cout << Customer::totalBalance << endl;
   C1.displayTotal();
   return 0;
}