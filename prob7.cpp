#include <iostream>
using namespace std;

int main ()
{
    int arr [5] = {1,3,4,};
    int i;
    cin >> i;
    if ((i <= 1 || i > 2) && (i % 2 == 0))
    {
        cout << i << "is not a Prime number.\n";
    }
    else if (i == 2)
    {
        cout << i << "is a prime number.\n";
    }
return 0;

}