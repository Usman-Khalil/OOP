//#include <iostream>
//using namespace std;
//
//class Customer
//{
//    string name;
//    int accountNumber;
//    int balance;
//public:
//
//    // Parametrized Constructor;
//    Customer(string a, int b, int c)
//    {
//        name = a;
//        accountNumber = b;
//        balance = c;
//    }
//
//    // user_defined copy constructor
//
//    Customer(Customer &B)
//    {
//        name = B.name;
//        accountNumber = B.accountNumber;
//        balance = B.balance;
//    }
//
//    void display()
//    {
//        cout << name << endl;
//        cout << accountNumber << endl;
//        cout << balance << endl;
//    }
//};
//
//int main()
//{
//    Customer A1("Usman", 1329, 20);
//
//    // copy constructor
//
//    Customer A2(A1);
//    A1.display();
//    A2.display();
//
//    // Another way to copy the values;
//
//    Customer A3 = A2;
//    A3.display();
//    return 0;
//}