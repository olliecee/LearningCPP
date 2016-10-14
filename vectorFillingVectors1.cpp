#include <iostream>
#include <vector>
using namespace std;

// Vectors can store information that can change
int main() {

	vector<int> stuff;

	// Creates a list with values 1 - 10 and adds it into the 'stuff' vector
	for (int i = 1; i <= 10; i++) {
		stuff.push_back(i);
	}

	// Displays the list in the 'stuff' vector
	for (int j = 0; j < 10; j++) {
		cout << stuff[j] << endl;
	}

	return 0;
}

/*
* Let's build a vector with 10 elements that are integers, numbered 1 through 10
* Lets do this in two different ways
*/