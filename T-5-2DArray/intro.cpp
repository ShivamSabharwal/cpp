#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void print2DArray(int arr[][2], int row, int col);
bool findIn2DArray(int arr[][2], int row, int col, int key);
int getMaxNumber(int arr[][2], int row, int col);

int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printArray
    // print2DArray(arr, 2, 2);

    // check if element is present in 2D Array
    // bool ans = findIn2DArray(arr, 2, 2, 10);
    // cout << ans;

    // findMax in element
    // int maxNumber = getMaxNumber(arr, 2, 2);
    // cout << "maxNumber is " << maxNumber << endl;

    // declar 2D array;
    // vector<vector<int>> arr1;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // arr1.push_back(a);
    // arr1.push_back(b);

    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     for (int j = 0; j < arr1[0].size(); j++)
    //     {
    //         cout << arr1[i][j];
    //     }
    // }

    vector<vector<int>> arr2(5, vector<int>(5, 5));
    cout << arr2[2][4];
    return 0;
}

void print2DArray(int arr[][2], int row, int col)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool findIn2DArray(int arr[][2], int row, int col, int key)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int getMaxNumber(int arr[][2], int row, int col)
{

    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
