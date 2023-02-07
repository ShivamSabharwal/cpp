#include <iostream>
using namespace std;

void printArray(int arr[], int size);
void selectionSort(int arr[], int size);

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

    selectionSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
}

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
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