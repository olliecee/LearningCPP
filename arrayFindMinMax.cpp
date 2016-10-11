#include <iostream>
using namespace std;

// Arrays, determining the maximum and minimum values inside an array
int main() {

	double  values[5] = { 2,4,8,1,6 };
	double  max = values[0],
		min = values[0];

	for (int i = 1; i < 5; i++) {
		if (values[i] > max) {
			max = values[i];
		};

		if (values[i] < min) {
			min = values[i];
		};
	}

	cout << "Maximum value: " << max << endl;
	cout << "Minimum value: " << min << endl;

	return 0;
}