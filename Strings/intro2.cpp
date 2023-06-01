// string
#include <iostream>
using namespace std;

bool CompareString(string str1, string str2);

int main()
{
    string str;
    // cin >> str;
    // getline(cin, str);
    // cout << str;

    // ######################################################   compare String;
    // string str1, str2;
    // cin >> str1 >> str2;
    // bool ans = CompareString(str1, str2);
    // cout << ans;

    return 0;
}

bool CompareString(string str1, string str2)
{

    if (str1.length() != str2.length())
    {
        return false;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}