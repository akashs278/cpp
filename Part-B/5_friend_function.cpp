#include <iostream>
using namespace std;

class Distance {
private:
    int meter;

public:
    Distance() {
        meter = 10;
    }

    // Friend function declaration
    friend int add_five(Distance);
};

// Friend function definition
int add_five(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << add_five(D);
    return 0;
}
