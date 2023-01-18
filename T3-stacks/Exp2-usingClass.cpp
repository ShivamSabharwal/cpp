#include <iostream>
using namespace std;

class stack
{
    // properties
    // top,arr
public:
    int *arr;
    int top;
    int size;

    // behaviour
    //  size using contructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // functions
    // push,pop,top,isEmpty
    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int Top()
    {
        if (top >= 0 and top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);
    st.push(22);
    st.push(44);
    st.push(45);
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << endl;

    return 0;
}