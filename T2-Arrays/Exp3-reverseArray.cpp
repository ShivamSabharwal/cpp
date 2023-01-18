#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{

    int mid = size / 2;
    for (int i = 0; i < mid; i++)
    {

        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[100], size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "Before reversing" << endl;
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "After reversing" << endl;
    printArray(arr, size);

    return 0;
}

// alternate approach
// main left and right pointer
// while (left <= right )
// swap left and right