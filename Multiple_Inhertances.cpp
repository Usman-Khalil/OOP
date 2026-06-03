#include <iostream>
using namespace std;

class Engineer
{
protected:
   string specialization;
public:

   void work()
   {
       cout << "I'm specialized in  " << specialization << endl;
   }
};

class Youtuber
{
protected:

   int subscriber;

public:

   void contentCreator()
   {
       cout << "I have  " << subscriber << " subscriber on the youtube." << endl;
   }
};

class CodeTeacher: public Engineer , public Youtuber
{
   string name;
public:

   CodeTeacher(string name, int subscriber, string specialization)
   {
       this->name = name;
       this->subscriber = subscriber;
       this->specialization = specialization;
   }

   void print()
   {
       cout << "My name is " << name << endl;
       work();
       contentCreator();
   }
};

int main()
{
   CodeTeacher T1("Usman", 1, "CPP");
   T1.print();
   return 0;
}