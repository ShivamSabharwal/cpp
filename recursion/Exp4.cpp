// is a key present in a string
// find max in array

// print array

#include <iostream>
#include <limits.h>
using namespace std;

bool checkKey(string &str, int i, int &l, char &key)
{
    if (i >= l)
    {
        return false;
    }
    if (str[i] == key)
    {
        return true;
    }
    return checkKey(str, i + 1, l, key);
}

int main()
{
    string str = "shivamSabharwal";
    int l = 15;
    int i = 0;
    char key = 'z';
    bool ans = checkKey(str, i, l, key);
    cout << ans;
    return 0;
}