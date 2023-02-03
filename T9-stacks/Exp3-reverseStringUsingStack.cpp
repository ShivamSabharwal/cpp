// question:  given a string, reverse it using a stack.

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<char> s;
    string name = "shivam";

    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        s.push(ch);
    }
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "reverse of string " << name << " is " << ans << endl;
    return 0;
}
