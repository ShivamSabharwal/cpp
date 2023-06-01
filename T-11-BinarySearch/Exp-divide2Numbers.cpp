#include <iostream>
using namespace std;

int solve(int divident, int divisor);

int main()
{
    int divident = -22;
    int divisor = -1;

    int ans = solve(divident, divisor);
    cout << "ans is " << ans;
    return 0;
}

int solve(int divident, int divisor)
{
    int s = 0;
    int e = abs(divident);
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (abs(mid * divisor) == abs(divident))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) > abs(divident))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    if ((divisor < 0 && divident < 0) || (divisor > 0 && divident > 0))
    {
        return ans;
    }
    else
    {
        return (ans * (-1));
    }
}