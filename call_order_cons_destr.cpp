#include <iostream>
using namespace std;

class Customer
{
   string name;
   int* balance;

public:

   Customer(string name)
   {
       this->name = name;
       cout << name << endl;
   }

   ~Customer()
   {
       cout << name << endl;
   }
};

int main()
{
   Customer A1("1") , A2("2") , A3("3");

   return 0;
}