#include <iostream>
using namespace std;

class Student
{
public:
   void print()
   {
       cout << "I'm student." << endl;
   }
};

class Male
{
public:
   void malePrint()
   {
       cout << "I'm male." << endl;
   }
};

class Female
{
public:
   void femalePrint()
   {
       cout << "I'm female." << endl;
   }
};

class Boy : public Student , public Male
{
public:
   void boyPrint()
   {
       cout << "I'm Boy." << endl;
   }
};

class Girl : public Student , public Female
{
public:
   void girlPrint()
   {
       cout << "I'm Girl." << endl;
   }
};


int main()
{
   Girl G1;
   G1.print();
   G1.girlPrint();
   G1.femalePrint();

   Boy  B1;
   B1.print();
   B1.boyPrint();
   B1.malePrint();
   return 0;
}