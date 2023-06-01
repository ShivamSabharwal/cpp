#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *childern[26];
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            this->childern[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertInTrie(TrieNode *root, string word)
{

    // base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->childern[index] != NULL)
    {
        child = root->childern[index];
    }
    else
    {
        child = new TrieNode(ch);
        root->childern[index] = child;
    }

    insertInTrie(child, word.substr(1));
}

bool searchInTrie(TrieNode *root, string word)
{

    // base case
    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->childern[index] != NULL)
    {
        child = root->childern[index];
    }
    else
    {
        return false;
    }

    return searchInTrie(child, word.substr(1));
}

void deleteFromTrie(TrieNode *root, string word)
{

    if (word.length() == 0)
    {
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->childern[index] != NULL)
    {
        child = root->childern[index];
    }
    else
    {
        return;
    }

    deleteFromTrie(child, word.substr(1));
}

int main()
{
    TrieNode *root = new TrieNode('-');

    // Insertion
    insertInTrie(root, "shivam");
    insertInTrie(root, "code");
    insertInTrie(root, "coder");
    insertInTrie(root, "coda");

    // searching
    // cout << searchInTrie(root, "shivam") << endl;
    // cout << searchInTrie(root, "code") << endl;
    // cout << searchInTrie(root, "coder") << endl;
    // cout << searchInTrie(root, "coda") << endl;
    // cout << searchInTrie(root, "shivamam") << endl;
    // cout << searchInTrie(root, "shiv") << endl;

    // delete
    deleteFromTrie(root, "shivam");
    cout << searchInTrie(root, "shivam") << endl;

    return 0;
}