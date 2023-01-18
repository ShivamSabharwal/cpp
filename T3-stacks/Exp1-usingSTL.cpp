#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creating stack
    stack<int> s;

    // push data
    s.push(2);
    s.push(1);

    // pop data
    s.pop();

    // top element
    cout << "the top element is"
         << " " << s.top() << endl;

    // check if empty
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // size of stack
    cout << "size of stack is " << s.size() << endl;

    return 0;
}