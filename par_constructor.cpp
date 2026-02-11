#include <iostream>
using namespace std;

class Student
{
    int roll;
    public: 
    Student (int r)
    {
        roll = r;
        cout << "roll no. " << roll << endl;
    }
};

int main ()
{
    Student s1(99), s2(100);
    return 0;
}