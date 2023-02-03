#include <iostream>
using namespace std;

int getPivotIndex(int arr[], int size)
{
    int s = 0, e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int arr[1000], size;
    cout << "Enter the size of the array " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = getPivotIndex(arr, size);
    cout << ans;
}