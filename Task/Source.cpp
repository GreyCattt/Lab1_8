/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Lab 1.8
*/
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter the number to check: ";
    cin >> number;

    // Check the last bit of the number using the bitwise AND operation
    if (number & 1) {
        cout << "The number is odd." << endl;
    } else {
        cout << "The number is even." << endl;
    }

    return 0;
}
