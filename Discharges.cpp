#include <iostream>
#include <cmath>
using namespace std;

int numberOfCharacters (int number);
void flipNumber (int num);

int main()
{
	int number;

	cout << "Let's flip your number!!!" << endl << endl;
	cout << "Enter the number: ";
	cin >> number;

	cout << "Your number is reversed: ";
	flipNumber(number);

	return 0;
}

int numberOfCharacters (int number){
	int counter = 0, discharge = 10;
	
	while (number > 0) {
		number /= 10;
		counter++;
	}
	
	counter -= 1; 
	
	for (int i = 1; i < counter; i++){
		discharge *= 10;
	}
	
	return discharge;
}

void flipNumber(int num){
	int a, discharge = numberOfCharacters (num), reverse = 0;

	while (discharge > 0) {
		a = num % 10;
		a = a * discharge;
		discharge /= 10;
		num /= 10;
		reverse += a;
	}
	
	cout << reverse << endl;
}


