#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[5] = {1, 2, 88, 7, 99};

    bool ans = linearSearch(arr, 5, 7);
    if (ans)
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}