#include <iostream>
using namespace std;

// Arrays: copying an array (apparently the only way is using a for loop, not sure if its the only way?
int main() {

	double values[] = { 1,2,6,34,60 };
	double copy[5];

	for (int i = 0; i < 5; i++) {
		copy[i] = values[i];
		cout << copy[i] << endl;
	}

	return 0;
}