#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n & 1)
    {
        return false;
    }
    return true;
}

int main()
{

    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }

    return 0;
}