#include <iostream>
using namespace std;

class Human
{
    string name;
protected:
    int age;
public:
    int weight;
};

class Student : public Human // means that the public properties of the parent is treated as public in child while protected are treated as potected;
{
    int rollNo , fees;
    void access()
    {
        name = "Usman"; // cannot be accessed in the child class bcz it is the  private member of the parent class
        age = 45; // can be accessed bcz it is protected in parent class and it can  be accessed in the child class as well;
        weight = 89; // can be accessed bcz it is public in parent class and it can  be accessed in the child class as well;
    }
};

class Teacher : protected Human // means that the public properties of the parent is treated as protected in child while protected are also treated as potected;
{
    int rollNo, fees;
    void access()
    {
        name = "Usman"; // cannot be accessed in the child class bcz it is the  private member of the parent class
        age = 45; // can be accessed bcz it is protected in parent class and it can  be accessed in the child class as well;
        weight = 89; // can be accessed bcz it is public in parent class and it can  be accessed in the child class as well;
    }
};

class Employee : private Human // means that the public properties of the parent is treated as private in child while protected are also treated as private;
{
    int rollNo, fees;
    void access()
    {
        name = "Usman"; // cannot be accessed in the child class bcz it is the  private member of the parent class
        age = 45; // can be accessed bcz it is protected in parent class and it can  be accessed in the child class as well;
        weight = 89; // can be accessed bcz it is public in parent class and it can  be accessed in the child class as well;
    }
};

int main()
{
    Student A1;
    A1.name = "Usman"; // cannot access name because it is the private member of the parent class human so cannot be accessed through child class;
    A1.age = 24; // cannot access age throough because it is protected for the child class class only so cannot be access in external code;
    A1.weight = 67; // can be accessed everywhere directlly through parent class or indirectly through the child class bcz it is the public member; 

    Teacher T1;
    T1.name = "Usman"; // cannot access name because it is the private member of the parent class human so cannot be accessed through child class;
    T1.age = 24; // cannot access age throough because it is protected for the child class class only so cannot be access in external code;
    T1.weight = 67; // cannot be accessd although it is the public member of the parent class but the chlid class make it protected so it cannot be accessed in the external code;

    Employee E1;
    E1.name = "Usman"; // cannot access name because it is the private member of the parent class human so cannot be accessed through child class;
    E1.age = 24; // cannot access age throough because it is protected for the child class class only so cannot be access in external code;
    E1.weight = 67; // cannot be accessd although it is the public member of the parent class but the chlid class make it private so it cannot be accessed in the external code;
    return 0;
}