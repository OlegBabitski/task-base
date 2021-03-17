#include <iostream>
using namespace std;

void flipNumber(int num);

int main()
{
	int number;

	cout << "Let's flip your number!!!" << endl;
	cout << "Enter the number: ";
	cin >> number;

	cout << "Your number is reversed: ";
	flipNumber(number);

	return 0;
}

void flipNumber(int num) {
	int a;

	while (num > 0) {
		a = num % 10;
		cout << a;
		num /= 10;
	}
}