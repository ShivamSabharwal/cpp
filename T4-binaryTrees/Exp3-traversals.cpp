// print inorder, preorder, postorder

#include <iostream>
#include <queue>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);

    cout << "Enter in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// similary for preorder and postorder

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 15 17 -1 -1 -1
    cout << "Inorder traveral is " << endl;
    inOrder(root);

    return 0;
}