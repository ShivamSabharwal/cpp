#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string str = "thiruvananthapuram";
    unordered_map<char, int> freq;

    for (auto i : str)
    {
        freq[i]++;
    }

    for (auto i : freq)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}