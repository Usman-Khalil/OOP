#include <iostream>
using namespace std;

class Area
{
    public:

    int calculateArea(int radius) // for circle;
    {
        return 3.14 * radius * radius;
    }

    int calculateArea(int length , int breadth) // for rectangle;
    {
        return length * breadth;
    }
};

int main()
{
    Area A1 , A2;
    cout << A1.calculateArea(4) << endl; // call the first function bcz it take 1 arguments;
    cout << A2.calculateArea(9 , 8) << endl; // call the second function bcz it take 2 arguments;
    return 0;
}