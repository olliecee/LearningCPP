#include <iostream>
using namespace std;

// Arrays + Loops
int main() {

	int size = 5;
	double values[size];

	for (int i = 0; i < size; i++) {
		values[i] = i;
		cout << values[i] << endl;
	}

	return 0;
}