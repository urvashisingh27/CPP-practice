#include <iostream>

using namespace std;

void add (int a, int b)
{
    int add = 0;
    add = a + b;
    cout << "addition of a & b is: " << add << endl;
}

void sub (int a, int b)
{
    int sub = 0;
    sub = a - b;
    cout << "subtraction of a & b is: " << sub << endl;
}

void mul(int a, int b)
{
    int mul = 0;
    mul = a * b;
    cout << "multiplication of a & b is: " << mul << endl;
}
void divi (int a, int b)
{
    float div = 0;
    if (b == 0)
    {
        cout << "divide by zero error.\n ";
    }
    else 
    {div = a / b;
    cout << "division of a & b is: " << div << endl;
    }
}

int main ()
{
    int x, y;
    cin >> x;
    cin >> y;

    add (x, y);
    sub (x, y);
    mul (x, y);
    divi (x, y);
    return 0;
}