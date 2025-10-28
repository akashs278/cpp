#include <iostream>
using namespace std;

int main() {
    double fahren, celsius;

    // Fahrenheit to Celsius
    cout << "Converting Fahrenheit to Celsius:" << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahren;

    celsius = (fahren - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << endl;

    // Celsius to Fahrenheit
    cout << "Converting Celsius to Fahrenheit:" << endl;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahren = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahren << endl;

    return 0;
}
