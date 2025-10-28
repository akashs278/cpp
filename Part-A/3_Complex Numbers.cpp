#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "Enter the first complex number:\n";
    cin >> x1 >> y1;

    cout << "Enter the second complex number:\n";
    cin >> x2 >> y2;

    // Addition
    x3 = x1 + x2;
    y3 = y1 + y2;
    cout << "Addition of two complex numbers: " << x3 << " + i" << y3 << endl;

    // Multiplication
    x3 = x1 * x2 - y1 * y2;
    y3 = x1 * y2 + x2 * y1;
    cout << "Multiplication of two complex numbers: " << x3 << " + i" << y3 << endl;

    return 0;
}
