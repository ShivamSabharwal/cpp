#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is prime no.";
    }
    else
    {
        cout << n << " is not a prime no.";
    }

    return 0;
}