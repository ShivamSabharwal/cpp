// print subsequences
#include <iostream>
using namespace std;

void printSubsequences(string str, string output, int index)
{
    if (index >= str.length())
    {
        cout << output << endl;
        return;
    }

    printSubsequences(str, output, index + 1);
    output.push_back(str[index]);
    printSubsequences(str, output, index + 1);
}

int main()
{

    // int arr[] = {1, 2, 3};
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequences(str, output, i);

    return 0;
}