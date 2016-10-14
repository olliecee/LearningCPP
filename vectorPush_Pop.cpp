#include <iostream>
#include <vector>
using namespace std;

// Vectors can store information that can change
int main() {

	vector<string> list;

	cout << "Please enter the names, press Q to quit" << endl;

	string exit;

	while (exit != "Q") {
		cin >> exit;
		list.push_back(exit);
	}

	list.pop_back(); // this removes the last line of our vector

	cout << "You have entered " << list.size() << " names:" << endl;

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << endl;
	}

	return 0;
}

/*
* We will be using PUSH and POP
* .push_back()
* .pop_back
*/