#include <iostream>
#include <vector> // new include for vectors
using namespace std;

// Vectors can store information that can change
int main() {

	vector<double> values;
	// vector<double> values(3); this is how you declare the size 
	values[0] = 11;
	values[1] = 22;
	values[2] = 33;
	// adding values like this defeats the purpose of the vector but its used to display that it can store values

	cout << values[1] << endl;

	return 0;
}