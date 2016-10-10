#include <iostream>
using namespace std;

double cubeVolume(double sideLength) {
	double volume = sideLength * sideLength * sideLength;
	return volume;
}

int main() {
	double side;

	cout << "Enter the length of one side of a cube: ";
	cin >> side;
	cout << "The volume of the code is " << cubeVolume(side) << endl;

	return 0;
}