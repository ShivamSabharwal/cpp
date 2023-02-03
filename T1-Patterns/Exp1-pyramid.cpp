//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int spaces = 0; spaces < n - row - 1; spaces++)
        {
            cout << " ";
        }

        for (int star = 0; star < row + 1; star++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}