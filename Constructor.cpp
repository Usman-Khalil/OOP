#include <iostream>
using namespace std;

class Customer
{
   string name;
   int accountNumber;
   int balance;
public:

   // Default Constructor;
   Customer()
   {
       cout << "Hey ! Constructor is called." << endl;
       name = "Usman";
       accountNumber = 11234;
       balance = 10;
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
   Customer A1 , A2;
   Customer A3;
   A1.display();
   A2.display();
   A3.display();
   return 0;
}