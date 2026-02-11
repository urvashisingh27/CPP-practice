#include <iostream>
using namespace std;

void swap(int a, int b)
{
    b =a + b;
    a = b -a;
    b = b - a;
    cout << "after swapping" << "a=" << a << "& b= " << b<< endl;
    
}

int main()
{
    
    int a, b;
    a =10;
    b =20;
    
    /*
    temp = a;
    a = b;
    b =temp;
    */
    swap (a, b);

    
    return 0;
}