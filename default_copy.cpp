#include <iostream>

using namespace std;

class Student
{
    public:
    int roll;
    string name;
};

int main()
{
    Student S1;
    S1.roll = 100;
    S1.name = "Amit";

    Student S2 =S1;
    cout << S2.roll << "&" << S2.name << endl;
}