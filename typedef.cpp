#include <iostream>
#include <vector>
using namespace std;

// typedef using on vectors. It is like organizing code into a variable.
typedef vector<int> row;
typedef vector<vector<int> > matrix;

// Vectors can store information that can change
int main() {
	// Define a vector of vectors
	matrix stuff;

	// Fill the inner vector, then insert it into the outer vector
	for (int i = 0; i < 5; i++) {
		row temp;

		for (int j = 0; j < 9; j++) {
			temp.push_back(i);
		}

		stuff.push_back(temp);
	}

	// Display all elements to the user
	for (int i = 0; i < stuff.size(); i++) {
		for (int j = 0; j < stuff[i].size(); j++) {
			cout << stuff[i][j];
		}
		cout << endl;
	}

	return 0;
}