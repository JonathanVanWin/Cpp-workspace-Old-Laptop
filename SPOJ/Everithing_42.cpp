#include <iostream>

int main() {
	int a;
	std::cin >> a;
	while (a != 42) {
		std::cout << a << std::endl;
		std::cin >> a;
	}
	return 0;
}
