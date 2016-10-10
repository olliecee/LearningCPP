#include <iostream>
using namespace std;

int main() {
	// Variables
	double	initial_balance,
			balance,
			rate,
			contributions,
			goal;

	int		years = 0;

	// Obtain variables
	cout << "Enter initial investment: ";
	cin >> initial_balance;

	cout << "Enter yearly contribution: ";
	cin >> contributions;

	cout << "Enter interest rate: ";
	cin >> rate;

	cout << "What is your goal: ";
	cin >> goal;

	balance = initial_balance;

	// While Loop
	while (balance < goal) {
		years = years + 1;
		double interest = balance * (rate / 100);
		balance = balance + interest + contributions;
	}

	// Display in console
	cout << "It took " << years << " years to reach your goal of " << goal << " dollars." << endl;

	return 0;
}