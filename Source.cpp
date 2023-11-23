#include<iostream>
using namespace std;

int main() {

	int initial_quantity, current_quantity, sold_quantity, restocked_quantity;

	cout << "Enter the initial amount of stock:\n";
	cin >> initial_quantity;

	int threshold = 40;

	current_quantity = initial_quantity;

	while (true) {
		char action;
		cout << "Press (S) for sold stock\nPress (R) for restocking\nPress (E) for exit" << endl;
		cin >> action;

		if (action == 's' || action == 'S') {
			cout << "Enter the amount of sold quantity:" << endl;
			cin >> sold_quantity;
			if (sold_quantity > current_quantity) {
				cout << "Your inventory is sold out." << endl;
			}
			else {
				current_quantity -= sold_quantity;
				cout << "Your sold inventory is " << current_quantity << endl;
			}
		}
		else if (action == 'r' || action == 'R') {
			cout << "Enter the restocked amount" << endl;
			cin >> restocked_quantity;
			current_quantity += restocked_quantity;
			cout << "Your inventory after restocking is " << current_quantity << endl;
		}
		else if (action == 'e' || action == 'E') {
			break;
		}
		else
		{
			cout << "invalid input" << endl;

		}
	}

	if (threshold > current_quantity) {

		cout << "Your inventory levels are below threshold limit " << (threshold) << " Please restock immediately!";
	}
	else if (threshold < current_quantity) {
		cout << "Your inventory levels are above threshold limit";
	}


	return 0;

}