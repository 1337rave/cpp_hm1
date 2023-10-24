#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

int main() {
    double circumference, radius, area;

    cout << "Calculate the area of a circle from the given circumference." << endl;
    cout << "Enter the circumference (in centimeters): ";
    cin >> circumference;

    if (circumference <= 0) {
        cout << "The circumference must be a positive value. Please enter a positive value." << endl;
        return 1;  
    }

    radius = circumference / (2 * PI);
    area = PI * pow(radius, 2);

    cout << "The radius is: " << radius << " centimeters." << endl;
    cout << "The area of the circle is: " << area << " square centimeters." << endl;

    return 0;
}
