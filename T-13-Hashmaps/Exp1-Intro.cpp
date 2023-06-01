#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{
    ////////////    unordered map

    // creation
    unordered_map<string, int> mp;

    // insertion
    pair<string, int> p1 = make_pair("Shivam", 23);
    mp.insert(p1);

    pair<string, int> p2("Shivam", 24);
    mp.insert(p2);

    mp["Rahul"] = 23;

    // traversal
    for (auto i : mp)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    // size
    cout << mp.size() << endl;

    // if present return 1 else 0
    cout << mp.count("Shivam") << endl;
    cout << mp.count("shivam") << endl;
    cout << mp.count("Rahul") << endl;

    if (mp.find("Shivam") != mp.end())
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    if (mp.count("Shivam") == 1)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    // To access the value of the key
    cout << mp.at("Shivam") << endl;

    cout << mp["Shivam"] << endl;
    cout << mp.size() << endl;
    cout << mp["Raj"] << endl;
    cout << mp.size() << endl;
    // Size has increased because if we access the value using mp["Raj"], "Raj" is not present so it will insert it in the map.

    return 0;
}