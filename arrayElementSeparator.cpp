#include <iostream>
using namespace std;

// Arrays being listed out in console horizontally with dividers
int main() {

	double values[5] = { 10,2,6,34,60 };

	for (int i = 0; i < 5; i++) {
		if (i > 0) {
			cout << " | ";
		}
		cout << values[i];
	}
	cout << endl;

	return 0;
}

// 10 | 2 | 6 | 34 | 60