#include <iostream>
using namespace std;
int total = 0;
int main()
{
    int arr[] = {10, 22, 45, 11};
    int len = sizeof(arr)/ sizeof(arr[0]);
    double avg;
    //static int total = 0;

    for (int i = 0; i < len; i++)
    {
        total = total + arr[i];
    }

    avg =  total / len;
    cout << "average: " << avg << endl;
    return 0;
}