//#include <iostream>
//using namespace std;
//
//// public access to the class and directly access the attributes of the class
//class student
//{
//public:
//    string name, grade;
//    int age;
//    int rollNo;
//};
//
//// private access to the class and accessing its attributes with the help of functions
//
//class student2
//{
//private:
//    string name2, grade2;
//    int age2;
//    int rollNo2;
//public:
//    // setter functions
//    void setName(string n)
//    {
//        name2 = n;
//    }
//    void setAge(int i)
//    {
//        age2 = i;
//    }
//    // getter functions
//    void getName()
//    {
//        cout << name2 << endl;
//    }
//};
//
//int main()
//{
//    // Class_1
//    student si;
//    si.name = "Usman";
//    si.age = 12;
//    si.grade = "A+";
//    cout << si.name << endl;
//    // Class_2
//    student2 s1;
//    s1.setName("Usman");
//    s1.getName();
//    cout << endl << sizeof(s1) << endl; // print 88 because 2 are of string type and 40 + 40 and 2 are of int type 8 and 80 + 8 = 88;
//
//    return 0;
//} 