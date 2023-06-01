#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool checkCircular(Node *head)
{
    unordered_map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited.find(temp) != visited.end())
        {
            visited[temp] = true;
        }
        else
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{

    Node *node1 = new Node(10);

    return 0;
}