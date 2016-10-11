#include <iostream>
using namespace std;

bool is4Digits(string pin) {
	bool status = true;

	if (pin.length() != 4) {
		status = false;
	}

	return status;
}

int main() {

	string PIN;
	cout << "Enter a 4 digit PIN number: ";
	cin >> PIN;

	if (is4Digits(PIN) == 1)
		cout << "PIN accepted.";
	else
		cout << "PIN denied.";
	cout << endl;

	return 0;
}