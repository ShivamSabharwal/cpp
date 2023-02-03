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

// ******************************** ye bhi sahi haii ****************************
// void levelOrderTraversal(node *root)
// // y na asliyat me node* root hai, save karne par node *root ban jata hai.
// {

//     queue<node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         cout << temp->data << " ";
//         q.pop();
//         if (temp->left)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             q.push(temp->right);
//         }
//     }
// }
void levelOrderTraversal(node *root)
// y na asliyat me node* root hai, save karne par node *root ban jata hai.
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 15 17 -1 -1 -1
    cout << "level order traveral is " << endl;
    levelOrderTraversal(root);

    return 0;
}