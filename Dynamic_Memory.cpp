#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, marks, rollNo;
};

int main()
{
    Student* s1 = new Student;

    (*s1).name = "Usman";
    s1->age = 27;
    cout << "Name of student is : " << s1->name << endl;
    cout << "Age of student is : " << (*s1).age;
    return 0;
}