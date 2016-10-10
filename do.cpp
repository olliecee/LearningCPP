#include <iostream>
using namespace std;

int main() {

	string pin;

	do {
		cout << "Enter a 4 Digit Pin: ";
		cin >> pin;
	} while (pin.length() < 4 && pin.length() > 4);

	cout << "PIN accepted.\n";

	return 0;

}