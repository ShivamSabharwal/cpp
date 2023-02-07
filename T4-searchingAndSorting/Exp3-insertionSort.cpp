#include <iostream>
using namespace std;

void printArray(int arr[], int size);
void insertionSort(int arr[], int size);

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

    insertionSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
}

void insertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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