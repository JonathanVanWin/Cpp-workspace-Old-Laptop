/*
 * Everithing42.cpp
 *
 *  Created on: 8/1/2018
 *      Author: grand_000
 */

#include "Everithing42.h"
#include <iostream>

Everithing42::Everithing42() {
	// TODO Auto-generated constructor stub

}

Everithing42::~Everithing42() {
	// TODO Auto-generated destructor stub
}
int main() {
	int a;
	std::cin >> a;
	while (a != 42) {
		std::cout << a << std::endl;
		std::cin >> a;
	}
	return 0;
}
