// https: // www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{

    int xorSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = findUniqueElement(arr);
    cout << "The Unique element is " << ans << endl;
    return 0;
}

// alternate Solution , O(n^2)

// int findUniqueElement(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {

//         int j = 0;
//         for (; j < size; j++)
//         {
//             if (arr[j] == arr[i] && i != j)
//             {
//                 break;
//             }
//         }

//         if (j == size)
//         {
//             return arr[i];
//         }
//     }
// }