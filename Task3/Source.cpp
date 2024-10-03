//Task3 Checking a set bit at a specific position
#include <iostream>
using namespace std;

int main()
{
    int number, position;

    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the bit position to check (starts at 0): ";
    cin >> position;

    // Checking a set bit at a specific position
    if (number & (1 << position)) {
        cout << "Bit in position " << position << " installed (1)" << endl;
    }
    else {
        cout << "Bit in position " << position << " not installed (0)" << endl;
    }

    return 0;


}