#include <iostream>
using namespace std;

void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main()
{
    int arr[1000], size;

    cout << "Enter the size of the array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting" << endl;
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool isSwaped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwaped = true;
            }
        }
        if (isSwaped == false)
        {
            break;
        }
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