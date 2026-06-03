#include <iostream>
using namespace std;

class Customer
{
   string name;
   int accountNumber;
   int balance;
public:

   // Parametrized Constructor;
   Customer(string a , int b , int c)
   {
       name = a;
       accountNumber = b;
       balance = c;
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
   Customer A1("Usman" , 1329 , 20);
   A1.display();
   return 0;
}