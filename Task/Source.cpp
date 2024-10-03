/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Lab 1.8
*/
#include <iostream>
using namespace std;
int main() 
{
	int nA;
	cout << "enter the number to check it for parity: ";
	cin >> nA;
	int choise;
	cout << "chose parity check method 1, 2: ";
	cin >> choise;
	if (choise == 1) {
		//first solution
		if (nA % 2 == 0){

			nA *= 2;

		}
		cout <<"You chose method 1 and if it parity the number will double: " << nA;
	}

	else if (choise == 2) {
		//second solution
		
		if (nA % 2 == 0)

		{

			nA *= 2;

		}

		else

		{

			nA--;

		}
		cout << "You chose method 2 and if it parity the number will double, else it will decrease by one: " << nA;
	}
	else
	{
		cout << "Wrong";
	}
	return 0;
}