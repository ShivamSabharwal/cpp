
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{

    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 5, 4) << endl;
    cout << binarySearch(arr, 5, 10) << endl;
    cout << binarySearch(arr, 5, 1) << endl;
    return 0;
}