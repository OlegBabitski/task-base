#include <iostream>
using namespace std;

void InputDate(int& day, int& month, int& year);
int Addition(int number);

int main()
{
	int day, month, year, destinyNumber;

	InputDate(day, month, year);

	day = Addition(day);
	month = Addition(month);
	year = Addition(year);
	destinyNumber = day + month + year;
	destinyNumber = Addition(destinyNumber);

	cout << "Your Destiny Number: " << destinyNumber << endl;

	return 0;
}

void InputDate(int& day, int& month, int& year)
{
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
}

int Addition(int number) {
	int a, b, c, d;

	while (number > 10) {
		a = number / 1000;
		b = (number / 100) % 10;
		c = (number % 100) / 10;
		d = (number % 10);

		number = a + b + c + d;
	}
	
	return number;
}
