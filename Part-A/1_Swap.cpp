#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << "\tb = " << b << endl;

    // Swapping with temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping with temp variable:" << endl;
    cout << "a = " << a << "\tb = " << b << endl;

    // Swapping without temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping without temp variable:" << endl;
    cout << "a = " << a << "\tb = " << b << endl;

    return 0;
}
