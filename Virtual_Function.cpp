#include <iostream>
using namespace std;

class Animal
{
    public:

    virtual void speak() // virtual bhi runtime pr hi execute hota hai; 
    {
        cout << " HuHu";
    }
};

class Dog  : public Animal
{
    public:

    void speak()
    {
        cout << " Bark";
    }
};

int main()
{
    Animal *p;
    p = new Dog(); // allocate memory at the runtime not compile time;
    p->speak(); 
    // Now the output is HuHu bcz new se dynamuc memory allocate hoti hai wo bhi run time pr compiler compile krtay  howawy us ko chor daita hai jb us ko skip kiya to mtlb kay p abhi bhi Animal class ko point kr rha hai and usi kay speak function ko call krega;
    // Now this time i'm using virtaul keyword with speak function of parent class Animal and virtual keyword ko bhi compile runtime kay liya chor daita hai so  jb runtime pr function call honay lga ho ga us  se pahlay  p Dog ko point krega kyu kay us  ko dynamic memory allocate ho chuki ho gi and that's why is dafa console pr "Bark" print ho ga;

    return 0;
}