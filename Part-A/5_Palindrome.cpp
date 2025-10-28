#include <iostream>
using namespace std;

int main() {
    int number, original, rev_num = 0, remain;

    cout << "Enter a number to check palindrome: ";
    cin >> number;

    original = number;
    while (number > 0) {
        remain = number % 10;
        rev_num = rev_num * 10 + remain;
        number = number / 10;
    }

    if (original == rev_num)
        cout << original << " is a palindrome" << endl;
    else
        cout << original << " is not a palindrome" << endl;

    return 0;
}
