#include <iostream>
using namespace std;

int main ()
{
    int num, org;
    cin >> num;
    org = num;
    int rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (rev == org)
    {
        cout << "num is palindrone.\n";
    }
    else
    cout << "num is not a palindrone.\n";
return 0;

}