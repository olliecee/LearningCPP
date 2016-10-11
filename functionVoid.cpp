#include <iostream>
using namespace std;

// Void function doesn't return anything
// Personal Note: Seems like a PHP include statement, it just contains information & can (if specified) do work!
void modify(int& z) {
	cout << "Pick a modification:\n1 - Add One\n2 - Minus One\n3 = Times Two\nYour selection is: ";
	int temp;
	cin >> temp;

	if (temp == 1) {
		z = z + 1;
	}
	else if (temp == 2) {
		z = z - 1;
	}
	else {
		z = z * 2;
	}

	// return: you don't necessarily have to return if you don't want to
}

int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;

	modify(a);
	cout << "\"integer a\" has been updated to " << a << endl;
	return 0;
}