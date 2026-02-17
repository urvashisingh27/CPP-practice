#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertFront (Node* &head, int d)
{
    Node* temp = new Node (d);
    temp -> next = head;
    head = temp;
}

void print (Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main ()
{
    Node* head = new Node (10);
    print (head);

    insertFront (head, 20);
    print (head);

    insertFront (head, 30);
    print (head);

    return 0;
}