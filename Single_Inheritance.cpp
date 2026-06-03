//#include <iostream>
//using namespace std;
//
//class Human
//{
//protected:
//    string name;
//    int age;
//
//public:
//
//    Human()
//    {
//        cout << "Constructor of parent class is called." << endl;
//    }
//
//    Human(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//
//    void display()
//    {
//        cout << name << " " << age;
//    }
//
//    void work()
//    {
//        cout << "I am working.";
//    }
//
//    ~ Human()
//    {
//        cout << "Destructor of parent class is called." << endl;
//    }
//};
//
//class Student : public Human
//{
//    int rollName;
//    int fees;
//
//public:
//
//    //Student(string name, int age, int rollName, int fees)
//    //{
//    //    this->name = name;
//    //    this->age = age;
//    //    this->rollName = rollName;
//    //    this->fees = fees;
//    //}
//
//    Student(string name, int age, int rollName, int fees) : Human(name, age)
//    {
//        this->rollName = rollName;
//        this->fees = fees;
//    }
//
//    Student()
//    {
//        cout << "Constructor of child class is called." << endl;
//    }
//
//    void print()
//    {
//        cout << name << " is " << age << " years old. His roll number is : " << rollName << ". His college fee is : " << fees << endl;
//    }
//
//    ~ Student()
//    {
//        cout << "Destructor of child class is called." << endl;
//    }
//};
//
//int main()
//{
//    Student S1("Usman" , 19 , 1 , 81650);
//    S1.print();
//
//    return 0;
//}