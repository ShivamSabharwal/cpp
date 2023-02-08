#include <iostream>
using namespace std;

float fahrenheitToCelcius(float temp);

int main()
{
    float temp;
    cout << "Enter temp in fahrenheit" << endl;
    cin >> temp;
    cout << "Temp in Celcius is " << fahrenheitToCelcius(temp) << endl;

    return 0;
}

float fahrenheitToCelcius(float temp)
{
    return ((temp - 30) * 5.0 / 9);
}