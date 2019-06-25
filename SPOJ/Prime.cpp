#include<iostream>

int main() {
	int times;
	std::cin >> times;
	std::cout << std::endl;
	for (int i = 0; i < times; i++) {
		int min, max;
		std::cin >> min >> max;

		for (int j = min; j <= max; j++) {
			if (j % 2 == 0) {
				for (int m = 3; m <= j; m++) {

				}
			} else {
				for (int m = 3; m <= j; m += 2) {

				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
