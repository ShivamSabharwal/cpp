#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {

        // spaces
        for (int spaces = 1; spaces <= n - row; spaces++)
        {
            cout << " ";
        }
        // pattern
        int num = row;
        for (int col = 1; col <= row; col++)
        {
            cout << num;
            num++;
        }

        // reverse pattern;
        num -= 2;
        for (; num >= row; num--)
        {
            cout << num;
        }
        cout << endl;
    }

    return 0;
}