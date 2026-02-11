#include <iostream>
using namespace std;

void reverse (char* s, int index, int length );
int main ()
{
    char  s[] = "hi up";
    int len = sizeof(s)/ sizeof (s[0]);
    reverse (s, 0, len);
    return 0;
}

void reverse (char* s, int index, int length)
{
    if (index == length)
    {
        return;
    }
    else{
        char temp = s[index];
        reverse (s, index+1, length);
        cout << temp;
    }
}
