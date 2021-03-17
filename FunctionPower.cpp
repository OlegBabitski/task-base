#include <iostream>
using namespace std;

double Exponentiation(double number, int power);

int main()
{	
	double number = 0.0;
	int power = 0;

	cout << "Raising a number to a power!" << endl << endl;
	cout << "Enter the number: ";
	cin >> number;
	cout << "To what extent do you need to build: ";
	cin >> power;

	cout << "Number " << number << " to the extent " << power << " equally " << Exponentiation(number, power) << endl << endl;

	return 0;
}

double Exponentiation(double number, int power) {
	int a = number;

	if (power == 0) {
		number = 1;
	} else if (power < 0) {
		number = 1 / number;
	} 

	for (int i = 1; i < power; i++) {
		number *= a;
	}
	

	return number;
}
