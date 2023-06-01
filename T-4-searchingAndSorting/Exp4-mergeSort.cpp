#include <iostream>
using namespace std;

void mergeSort(int arr[], int s, int e);
void merge(int arr[], int s, int e);

int main()
{
    int arr[] = {10, 0, 9, -1, 2};
    int n = 5;
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);
    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

void mergeSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // leftCall
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

void merge(int arr[], int s, int e)
{

    int mid = s + (e - s) / 2;
    int *left = new int(mid - s + 1);
    int *right = new int(e - mid);

    int index = s;
    for (int i = 0; i < mid - s + 1; i++)
    {
        left[i++] = arr[index++];
    }

    index = mid + 1;
    for (int i = 0; i < e - mid; i++)
    {
        right[i++] = arr[index++];
    }

    int leftIndex = 0, rightIndex = 0, mainIndex = 0;
    int lSize = mid - s + 1, rSize = e - mid;
    while (leftIndex < lSize && rightIndex < rSize)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < lSize)
    {
        arr[mainIndex++] = left[leftIndex++];
    }
    while (rightIndex < rSize)
    {
        arr[mainIndex++] = right[rightIndex++];
    }

    return;
}