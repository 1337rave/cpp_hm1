#include <iostream>
using namespace std;

int main() {
    double initialVelocity, time, acceleration, distance;

    cout << "Calculate the distance traveled during linear uniformly accelerated motion." << endl;
    cout << "Enter the initial velocity (m/s): ";
    cin >> initialVelocity;

    cout << "Enter the time (s): ";
    cin >> time;

    cout << "Enter the acceleration (m/s^2): ";
    cin >> acceleration;

    distance = initialVelocity * time + (0.5 * acceleration * time * time);

    cout << "The distance traveled is: " << distance << " meters." << endl;

    return 0;
}
