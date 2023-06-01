// print array

#include <iostream>
using namespace std;

void printArray(int arr[], int n, int index)
{
    if (index >= n)
    {
        return;
    }

    printArray(arr, n, index + 1);
    cout << arr[index];
}

int main()
{
    int n = 5, index = 0;
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, n, index);

    return 0;
}