#include <iostream>

int main() {
	int number1, number2;
	std::cin >> number1 >> number2;

	if (number1 < number2) {
		std::swap(number1, number2);
	}

	if (number1 == 1 || number2 == 1) {
		std::cout << number1 * number2 * 4 << std::endl;
	}
	else {
		int result = (number2 + 2) * number1 + number2 * (number1 + 2);
		if (number1 % 2 == 1 && number2 % 2 == 1) {
			result -= 2;
		}
		std::cout << result << std::endl;
	}

	return 0;
}
