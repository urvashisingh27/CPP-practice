#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if ( a >= b && a >= c)
    
        {
            cout << " a is the largest num.\n";
        }
        else if ( b >= a && b >= c)
        {
            cout << "b is the largest num.\n";
        }
    
    else 
        {
            cout << "c is the largest num.\n";
        }
        return 0;
}