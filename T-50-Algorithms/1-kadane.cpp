#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 10, -100, 2, 4, 9, -88, 99, 100, 80};

    int currSum = arr[0], overallSum = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (currSum >= 0)
        {
            currSum += arr[i];
        }
        else
        {
            currSum = arr[i];
        }

        if (currSum > overallSum)
        {
            overallSum = currSum;
        }
    }
    cout << overallSum;
}