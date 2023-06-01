// char arrays
#include <iostream>
#include <string>
using namespace std;

int getLength(char arr[]);
void reverseString(char arr[]);
void replaceSpaces(char arr[]);
bool isPalindrome(char arr[]);
void convertToUpperCase(char arr[]);

int main()
{
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 100);
    cout << ch << endl;

    // ######################################################    find length;
    // int l = getLength(ch);
    // cout << l;

    // ######################################################   reverse string;
    // reverseString(ch);
    // cout << "after reversal string is " << ch;

    // ######################################################   replace spaces;
    // replaceSpaces(ch);
    // cout << ch;

    // ######################################################    isPalindrome;
    // bool ans = isPalindrome(ch);
    // cout << ans;

    // ######################################################   convert To upperCase;
    convertToUpperCase(ch);
    cout << ch;

    return 0;
}

int getLength(char arr[])
{
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseString(char arr[])
{
    int l = getLength(arr);
    int i = 0, j = l - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void replaceSpaces(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
        i++;
    }
}

bool isPalindrome(char arr[])
{
    int l = getLength(arr);
    int s = 0, e = l - 1;
    while (s < e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void convertToUpperCase(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        arr[i] = arr[i] - 32;
        i++;
    }
}