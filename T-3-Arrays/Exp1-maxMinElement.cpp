#include <iostream>
using namespace std;

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{

    int arr[1000];
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << endl;
        cin >> arr[i];
    }

    cout << "Min element is " << getMin(arr, size) << endl;
}
