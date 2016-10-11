#include <iostream>
using namespace std;

// Function Prototype / Declaration
double cubeVolume(double);

// Main
int main() {
	double side;

	cout << "Enter the length of one side of a cube: ";
	cin >> side;
	cout << "The volume of the code is " << cubeVolume(side) << endl;

	return 0;
}

// Cube Volume (function)
double cubeVolume(double sideLength) {
	double volume = sideLength * sideLength * sideLength;
	return volume;
}