#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
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

    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {1, 2, 3, 4, 5};
    int odd1[1] = {1};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);

    return 0;
}
