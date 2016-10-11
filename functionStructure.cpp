#include <iostream>
using namespace std;

// Struct (Structure Function)
struct person {
	string name;
	int age;
}; // Make sure to put a semi-colon for structs

// Function to pass by reference, removing the "&" passes by value
person readInput(person& w) {
	cout << "Enter name: ";
	cin >> w.name;
	cout << "Enter age: ";
	cin >> w.age;
	return w;
}

int main() {
	person A;
	readInput(A);
	cout << endl << "Person A's name is " << A.name << " and they are " << A.age << " years old!";

	return 0;
}