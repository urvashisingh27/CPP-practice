#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1 = {10, 20, 30};

    cout << v1.size() << endl;
    cout << v1. capacity() << endl;
    v1. push_back(40);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
}