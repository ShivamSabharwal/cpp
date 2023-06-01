// insertion in linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// void findLengthLL(Node *head)
int findLengthLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtBeg(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtBeg(head, tail, data);
        return;
    }
    int l = findLengthLL(head);
    if (pos > l)
    {
        insertAtEnd(head, tail, data);
        return;
    }
    Node *temp = head;
    int counter = 1;
    while (counter < pos - 1)
    {
        temp = temp->next;
        counter++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeg(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }
    Node *temp = head;
    if (head->next == NULL)
    {
        tail = NULL;
    }
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
}

void deleteFromEnd(Node *&head, Node *&tail)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    tail = temp;
    temp = temp->next;
    tail->next = NULL;
    delete temp;
}

void deleteAtPosition(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        deleteAtBeg(head, tail);
        return;
    }
    int l = findLengthLL(head);
    if (pos > l)
    {
        cout << "invalid position" << endl;
        return;
    }
    if (pos == l)
    {
        deleteFromEnd(head, tail);
        return;
    }
    int i = 1;
    Node *prev = head;
    while (i < pos - 1)
    {
        prev = prev->next;
        i = i + 1;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{

    // Node *node1 = new Node(5);
    // Node *node2 = new Node(10);
    // Node *node3 = new Node(15);
    // Node *node4 = new Node(20);

    // node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;

    Node *head = NULL;
    Node *tail = NULL;

    insertAtBeg(head, tail, 5);
    insertAtBeg(head, tail, 10);
    insertAtBeg(head, tail, 15);
    insertAtEnd(head, tail, 100);
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 1);

    printLL(head);
    // cout << findLengthLL(head);

    // ***********************************************

    // printing linked list
    // printLL(head);

    // ************************************************

    // insert at beginning of linked list;
    // insertAtBeg(head, 80);
    // insertAtBeg(head, 70);
    // printLL(head);
    // insertAtBeg(head, -1);
    // printLL(head);

    // ************************************************
    // insert at End

    // insert at ith position;
    // Node *nHead = NULL;
    // Node *nTail = NULL;

    // insertAtPosition(nHead, nTail, 3, 44);
    // printLL(nHead);

    // ************************************************

    // Deletion

    // delete from beginning
    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // deleteAtBeg(head, tail);
    // printLL(head);

    // ************************************************
    // delete from end
    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // deleteFromEnd(head, tail);
    // printLL(head);

    // ************************************************
    // delete at position

    deleteAtPosition(head, tail, 7);
    printLL(head);

    return 0;
}