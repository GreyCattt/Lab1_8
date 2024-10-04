//Task 2 The calculation of the number of set bits.
#include <iostream>
#include <cmath>
using namespace std;
//created a function that calculate bits
//took the code from practice 1.6
int countBits(int number, bool bitValue)
{
    int count = 0;
    while (number > 0) {
        if ((number & 1) ==bitValue) {
            count++;
        }
        number >>= 1;
    }
    return count;
}

int main() 
{
	int number;
	cout << "Enter the number to calculate the number of set bits: ";
	cin >> number;
    int countOfSetBits = countBits(number, true);
    cout << "Number of set bits (1s): " << countOfSetBits << endl;


	return 0;
}
