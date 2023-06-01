// printDigits

#include <iostream>
using namespace std;

void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;

    printDigits(n / 10);
    cout << digit << " ";
}

int main()
{
    int n = 2000;
    printDigits(n);

    return 0;
}