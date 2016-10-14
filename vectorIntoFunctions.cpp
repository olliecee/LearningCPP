#include <iostream>
#include <vector>
using namespace std;

// Declaring our variables
vector<int> numbers;

// Function that does work, passing in a value 
void fun(vector<int> blah) {
	for (int i = 1; i <= 10; i++) {
		blah.push_back(i);
	}

	for (int j = 0; j < 10; j++) {
		cout << blah[j] << endl;
	}
}

int main() {
	fun(numbers); // Calls the fun function we created above main();
	return 0;
}