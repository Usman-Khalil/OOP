#include <iostream>
using namespace std;

class Person
{
protected:
   string name;
   int age;

public:

   void introduce()
   {
       cout << "My name is " << name << endl;
   }
};

class Employee : public Person
{
protected:
   
   int salary;

public:

   void info()
   {
       cout << "My salary is : " << salary << endl;
   }
};

class Manager : public Employee
{
   string department;
   int noOfEmployees;

public:

   Manager(string name , int age ,int salary , string department , int noOfEmployees)
   {
       this->name = name;
       this->age = age;
       this->salary = salary;
       this->department = department;
       this->noOfEmployees = noOfEmployees;
   }

   void print()
   {
       cout << name << " " << age << " " << salary << " " << department << " " << noOfEmployees << endl;
   }
};

int main()
{
   Manager M1("Usman", 19, 20, "Finance", 200);
   M1.introduce();
   M1.info();
   M1.print();
   return 0;
}