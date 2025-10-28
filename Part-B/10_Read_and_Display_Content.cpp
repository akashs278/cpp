#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    ifstream inputfile("input.txt");  // Correct file name
    if (!inputfile) {                 // Check if file opened successfully
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    string line;
    cout << "File Content : " << endl;

    while (getline(inputfile, line)) {  // Correct getline usage
        cout << line << endl;
    }

    inputfile.close();  // Added semicolon
    return 0;
}
