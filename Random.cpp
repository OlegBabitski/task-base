#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int randomNumber = 0, userNumber = 0;

	srand(time(0));
	randomNumber = rand() % 20;

	while (true) {
		cout << "Enter the number: ";
		cin >> userNumber;

		if (userNumber == randomNumber) {
			cout << "You WIN!";
			break;
		}
		if (userNumber > randomNumber) {
			cout << "Less! ";
		}
		if (userNumber < randomNumber) {
			cout << "More! ";
		}
	}

	return 0;
}
