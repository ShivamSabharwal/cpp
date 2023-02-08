#include <iostream>
using namespace std;

unsigned int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int main()
{

    unsigned int n;
    cin >> n;

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << "Factorial of " << i << " is " << fact(i) << endl;
    // }

    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}