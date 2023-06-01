#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int index)
{
    if (index == size - 1)
    {
        return true;
    }
    if (arr[index] > arr[index + 1])
    {
        return false;
    }

    return isSorted(arr, size, index + 1);
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 5, 4, 3};

    cout << isSorted(arr1, 5, 0) << endl;
    cout << isSorted(arr2, 5, 0);

    return 0;
}