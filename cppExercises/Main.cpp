#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	cout << "Hello World! \nWhat's your name?" << endl;
	cin >> a;
	cout << "Nice to meet you, " + a + "!" << endl;
	return 0;
}
