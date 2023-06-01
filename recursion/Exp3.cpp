// find max in array

// print array

#include <iostream>
#include <limits.h>
using namespace std;

// int findMax(int arr[], int n, int index, int maxi)
// {
//     if (index >= n)
//     {
//         return maxi;
//     }
//     if (arr[index] > maxi)
//     {
//         maxi = arr[index];
//     }
//     maxi = findMax(arr, n, index + 1, maxi);
//     return maxi;
// }

void findMax(int arr[], int n, int index, int &maxi)
{
    if (index >= n)
    {
        return;
    }
    if (arr[index] > maxi)
    {
        maxi = arr[index];
    }
    findMax(arr, n, index + 1, maxi);
}

int main()
{
    int n = 5, index = 0;
    int maxi = INT_MIN;
    int arr[] = {10, 20, 3, 4, 5};
    findMax(arr, n, index, maxi);
    cout << maxi;
    return 0;
}