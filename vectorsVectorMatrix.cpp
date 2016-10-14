#include <iostream>
#include <vector>
using namespace std;

// Vectors can store information that can change
int main() {
	// Define a vector of vectors
	vector<vector<int> > stuff;

	// Fill the inner vector, then insert it into the outer vector
	for (int i = 0; i < 5; i++) {
		vector<int> temp;

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

/*
* Define a vector of vectors
* Fill the inner vector, then insert it into the outer vector
* Display all elements to the user
*/