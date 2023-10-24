#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3, R0;

    cout << "Calculate the equivalent resistance (R0) of three resistors in parallel." << endl;
    cout << "Enter the values of R1, R2, and R3 (in ohms):" << endl;

    cout << "R1 -> ";
    cin >> R1;

    cout << "R2 -> ";
    cin >> R2;

    cout << "R3 -> ";
    cin >> R3;

    if (R1 == 0 || R2 == 0 || R3 == 0) {
        cout << "The values of resistors cannot be zero. Please enter non-zero values." << endl;
        return 1;
    }

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "The equivalent resistance (R0) is " << R0 << " ohms." << endl;

    return 0;
}
