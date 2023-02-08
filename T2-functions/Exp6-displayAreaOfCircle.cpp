#include <iostream>
using namespace std;

float circleArea(float radius)
{
    float area = (22.0 / 7) * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    cout << circleArea(radius) << endl;
}