#include <iostream>

using namespace std;

int main()
{
    int array[] ={10, 20, 30, 40, 50};
    int* p = array;

     cout << *p << " & " << p << endl; //present value and address of p
     cout << *(p+1)<< " & " << p << endl; // next value and address of p
     cout << *p++ << " & " << p << endl; // present value and then next address
     cout << *++p << " & " << p << endl;//increment address and stored value in p
     cout << *p-- << " & " << p << endl;//present value and then decrement address of p
     cout << *--p << " & " << p << endl; // again decrement address and its stored value of p
    return 0;
}