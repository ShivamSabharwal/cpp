#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int n, int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (target == v[mid])
    {
        return mid;
    }

    if (target > v[mid])
    {
        return binarySearch(v, n, mid + 1, e, target);
    }

    return binarySearch(v, n, 0, mid - 1, target);
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50};
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int target = 99;

    int ans = binarySearch(v, n, s, e, target);
    cout << ans;

    return 0;
}