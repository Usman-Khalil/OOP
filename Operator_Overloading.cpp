#include <iostream>
using namespace std;

class Complex
{
    int real , imag;

    public:

    Complex(){}

    Complex(int real , int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator + (Complex &c) 
    {
        Complex ans;
        ans.real = real + c.real; // is main jo real hai wo jis ne is Function ko call kiya hai us kay variables hain humaray  case main ya real C1 kay hai ;
        ans.imag = imag + c.imag;
        return ans;
    }
};

int main()
{
    Complex C1(5 , 7);
    Complex C2(4 , 90);
    Complex C3 = C1 + C2; // + as a funtion use ho rha hai ya actual operator ni hai is ko operator overloading kehtay hain;
    C3.display(); // |-> + function ko C1 call kr rha hai and C2 ko as a argument bhj rha hai (alias) is liya operator funtion main sirf aik parameter hai jo C2 ka alias create kr rha hai;
    return 0;
}