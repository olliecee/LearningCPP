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

	cout << "Enter how many years investment will last: ";
	cin >> years;

	rate = rate / 100;
	balance = initial_balance;

	// For loop
	for (int i = 1; i <= years; i++) {
		double interest = balance * rate;
		balance = balance + interest + contributions;
		cout << i << " " << balance << endl;
	}

	return 0;
}