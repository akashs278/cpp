#include <iostream>
using namespace std;

int main() {
    int term, Fn1 = 0, Fn2 = 1, Fn;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> term;

    cout << "Fibonacci Series:" << endl;
    cout << Fn1 << endl << Fn2 << endl;

    for (int i = 3; i <= term; i++) {
        Fn = Fn1 + Fn2;
        cout << Fn << endl;
        Fn1 = Fn2;
        Fn2 = Fn;
    }

    return 0;
}
