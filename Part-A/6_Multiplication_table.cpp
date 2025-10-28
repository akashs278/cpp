#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to display multiplication table: ";
    cin >> number;

    cout << "Multiplication Table:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
