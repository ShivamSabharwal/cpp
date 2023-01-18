#include <iostream>
using namespace std;

int countBits(int a, int b)
{
    int count = 0;
    while (a)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }

    while (b)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }

    return count;
}

int main()
{
    // Write C++ code here
    int a, b;
    cin >> a >> b;

    cout << "No. of bits are " << countBits(a, b);

    return 0;
}