#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b; // what if user input b == 0 ?;
    try
    {
        if(b == 0)
            throw "Undefined";
        int c = a / b ;
        cout << c << endl;
    }
    catch(const char *p)
    {
        cout << "Exceptionn Occurred : " << p << endl;
    }

    try{
        // int *p = new int[1000000000000000000];
        cout << "Memory allocation is successfull.";
        // delete []p;
    }
    catch(const exception &e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }
    return 0;
}