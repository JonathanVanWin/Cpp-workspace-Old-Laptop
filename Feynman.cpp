#include "Feynman.h"

Feynman::Feynman() {
	// TODO Auto-generated constructor stub

}

Feynman::~Feynman() {
	// TODO Auto-generated destructor stub
}
#include<iostream>
int main() {

	while (1) {
		int num;
		std::cin >> num;
		if (num != 0)
			break;
		std::cout << num * (num + 1) * (2 * num + 1) / 6;

	}
	return 0;

}
