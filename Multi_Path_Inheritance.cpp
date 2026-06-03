#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "My name is " << name << endl;
    }
};

class Engineer : public virtual Human // virtual keyword is used to resolve the error of double path ambiguity;
{
protected:
    string specialization;
public:

    void work()
    {
        cout << "I'm specialized in  " << specialization << endl;
    }
};

class Youtuber : public virtual Human 
{
protected:

    int subscriber;

public:

    void contentCreator()
    {
        cout << "I have  " << subscriber << " subscriber on the youtube." << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
    int salary;
public:

    CodeTeacher(string name, int subscriber, string specialization , int salary)
    {
        this->name = name;
        this->subscriber = subscriber;
        this->specialization = specialization;
        this->salary = salary;
    }

    void print()
    {
        display();
        cout << "My salary is " << salary << endl;
        work();
        contentCreator();
    }
};

int main()
{
    CodeTeacher T1("Usman", 1, "CPP" ,9000);
    T1.print();
    return 0;
}