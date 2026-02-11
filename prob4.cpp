#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t = 0;
    double p =0.0, r = 0.0, comp, amt; 
    cin >> p;
    cin >>  r;
    cin >> t;
    amt = p * pow((1 + (r/100)), t);
    comp = amt - p;

    cout << "compound interest is: " << comp << endl;
    return 0;
}