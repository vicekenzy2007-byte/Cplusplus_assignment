#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double pi = 3.141592653589793;
    cout << "Enter radius: ";
    cin >> radius;

    double area = pi * pow(radius, 2);
    cout << "Area of the circle: " << area << endl;
    return 0;
}