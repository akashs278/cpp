#include <iostream>
using namespace std;

int main() {
    int a, b, res;
    char op;

    cout << "Simple Calculator" << endl;
    cout << "Enter values of a, op, and b: " << endl;
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            res = a + b;
            cout << res;
            break;
        case '-':
            res = a - b;
            cout << res;
            break;
        case '*':
            res = a * b;
            cout << res;
            break;
        case '/':
            res = a / b;
            cout << res;
            break;
        case '%':
            res = a % b;
            cout << res;
            break;
    }

    return 0;
}
