#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this ->data = data;
        this -> next = NULL;
    }
};

void insertAtStart(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

int main()
{
    Node* head = new Node(10);
    print (head);

    insertAtStart(head, 12);
    print(head);

    insertAtStart(head, 34);
    print(head);
    return 0;
}