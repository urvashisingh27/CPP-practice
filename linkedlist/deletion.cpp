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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        } 
        cout << "the memory is free for node with data: " << value << endl;
    }
};

void insertFront( Node* &head, int d)
{
    Node* temp = new Node (d);
    temp -> next = head;
    head = temp;
}

void insertBack( Node* &tail, int d)
{
    Node* temp = new Node (d);
    tail -> next = temp;
    tail = temp;
}

void insertPos(Node* &head, Node* &tail, int pos, int d)
{
    Node* insertAtPos = new Node (d);
    int count = 1;
    Node* temp = head;

    if (pos == 1)
    {
        insertFront(head, d);
        return;
    }

    while (count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertBack (tail, d);
        return;
    }

    if (count == pos)
    {
        insertAtPos-> next = NULL;
        tail = insertAtPos;
        return;
    }

    if (count == pos-1)
    {
        insertAtPos -> next = temp->next;
        temp->next = insertAtPos;
        return;
    }
}

void nodeDeletion (Node* &head, int pos)
{
    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count =1;
        while (count <= pos)
        {
            prev =curr;
            curr= curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
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

int main()
{
    Node* head = new Node(10);
    Node* tail = head;

    print(head);

    insertFront(head, 20);
    print (head);
 insertFront(head, 30);
    print (head);
     insertBack (tail, 5);
    print (head);
    insertFront(head, 40);
    print (head);
    insertPos(head, tail, 3, 35);
    print (head);

    nodeDeletion(head, 3);
    print (head);
return 0;
}