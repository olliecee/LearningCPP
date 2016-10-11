#include <iostream>
using namespace std;

// Arrays
int main() {

	// Array
	string names[] = { "George", "Bob", "Sarah" };
	double numbers[] = { 14, 26, 100, 35 };

	// Tutorial Method
	cout << "Tutorial: " << names[2] << endl;

	// Personal Method: I wanted to just display all the names
	for (int i = 0; i < 3; i++) {
		cout << "Personal: " << names[i] << endl;
	}

	return 0;
}