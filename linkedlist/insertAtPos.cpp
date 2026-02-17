#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertFront (Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

void insertBack (Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    
}

void insertPosition (Node* &head, Node* &tail, int pos, int d)
{
    Node* nodeToInsert = new Node(d);
    Node* temp = head;
    int count = 1;
    if (pos == 1)
    {
        insertFront(head, d);
        return;
    }

          
    while (count < pos-1)
    {
        temp = temp ->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertBack(tail, d);
        return;
    }

    if (count == pos)
    {
        nodeToInsert->next = NULL;
        tail = nodeToInsert;
        return;
    }
        if (count == pos-1)
        {
            nodeToInsert -> next = temp-> next;
            temp->next = nodeToInsert;
            return;
        }
          
}

void print (Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
        cout << endl;
}

int main ()
{
    Node* head = new Node (10);
    Node* tail = head;

    print (head);

    insertBack(tail, 20);
    print (head);
    insertBack(tail, 30);
    print (head);
    insertBack (tail, 40);
    print (head);
    insertPosition(head, tail, 5, 50);
    print (head);
    return 0;
}