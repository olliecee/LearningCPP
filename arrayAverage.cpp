#include <iostream>
using namespace std;

// Arrays: average out of the total
int main() {

	double values[] = { 1,2,6,34,60 };
	double sum;

	for (int i = 0; i < 5; i++) {
		sum = sum + values[i];
	}

	cout << sum / 5 << endl;

	return 0;
}