#include <iostream>
using namespace std;

int Units(int number);

int main()
{
	int number = 0;

	cout << " Displaying numbers in the binary system that consist of ones! " << endl;

	cout << "Enter the number: ";
	cin >> number;

	for (int i = 1; i < number; i++) {
		bool flag = true;
		int num = i;

		while (num > 0) {
			if (num % 2 == 1) {
				num /= 2;
			}
			else {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << i << " " << Units(i) << endl;
		}
	}

	return 0;
}

int Units(int number) {
	int bin = 0, k = 1;

	while (number)
	{
		bin += (number % 2) * k;
		k *= 10;
		number /= 2;
	}

	return bin;
}

