
// find max in array and return all the indexes

#include <iostream>
#include <limits.h>
using namespace std;

void checkKey(string &str, int i, int &l, char &key, vector<int> &ans)
{
    if (i >= l)
    {
        return;
    }
    if (str[i] == key)
    {
        ans.push_back(i);
    }
    checkKey(str, i + 1, l, key, ans);
}

int main()
{
    string str = "shivamSabharwal";
    int l = 15;
    int i = 0;
    char key = 'a';
    vector<int> ans;
    checkKey(str, i, l, key, ans);

    return 0;
}