

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int arr[] = {1, 2, 3};
    // char num = '0' + arr[0];
    s.push_back('0' + arr[1]);
    cout << s << endl;

    return 0;
}