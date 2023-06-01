// return subsequences
#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str, string output, int index, vector<string> &v)
{
    if (index >= str.length())
    {
        v.push_back(output);
        return;
    }

    printSubsequences(str, output, index + 1, v);
    output.push_back(str[index]);
    printSubsequences(str, output, index + 1, v);
}

int main()
{

    // int arr[] = {1, 2, 3};
    string str = "abc";
    string output = "";
    int i = 0;
    vector<string> v;
    printSubsequences(str, output, i, v);
    for (auto val : v)
    {
        cout << val << endl;
    }

    return 0;
}