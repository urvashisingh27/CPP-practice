#include <iostream>
using namespace std;

/*
int main()
{
    char c = 'A';
    cout << "ASCII value of A is: " << int(c) << endl;
    return 0;
}
    */

int main ()
{
    char ch, str[200] = "urvashi";
    int i = 0, val;

    while (str[i])
    {
        ch = str[i];
        val =ch;

        cout << ch <<"\t\t\t" << val << endl;
        i++;
    }

    cout << endl;
    return 0;

}