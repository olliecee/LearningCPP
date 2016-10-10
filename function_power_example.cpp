/* Recreating the power function without including <cmath> */
#include <iostream>

using namespace std;

double mypowerfunction(double A, double B) {
	double ans = A;
	int i = 1;

	while (i < B) {
		ans = ans * A;
		i++;
	}
	return ans;
}

int main() {
	cout << mypowerfunction(2.0, 3.0) << endl;
	return 0;
}