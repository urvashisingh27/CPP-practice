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

void inserttail(Node* &tail, int d)
{
    Node* temp = new Node (d);
    tail-> next = temp;
    tail = temp;
}

void print (Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main ()
{
    Node* head = new Node (10);
    Node* tail = head;

    print (head);

    inserttail(tail, 20);
    print (head);

    inserttail(tail , 30);
    print (head);

    return 0;
}