#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
    {
        cout << "i am Base" << endl;
    }
};

class Derived : public Base
{
    public:
    void show()
    {
        cout << "i am derived" << endl;
    }
};

int main ()
{
    Base* ptr;
    Derived d1;

    ptr = &d1;
    ptr -> show();
    return 0;
}