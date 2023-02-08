#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // creating constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    node *root;
    // root = constructTree();
    return 0;
}