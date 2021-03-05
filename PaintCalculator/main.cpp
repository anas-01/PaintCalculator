#include <iostream>

using namespace std;

int main() {

	int numOfGallons, numOfChildren, numOfDays;
	float Area;
	double waste = 1.2;
	double painters = 0.004;

	cout << "Welcome to the paint calculator" "\n";
	cout << "" "\n";

	cout << "Please enter the surface area to be painted: ";
	cin >> Area;
	cout << "" "\n";

	cout << "The Surface Area to be painted: " << Area << "\n";
	cout << "" "\n";

	cout << "Enter the number of children in the vicinity of the structure to be painted: ";
	cin >> numOfChildren;
	cout << "" "\n";

	cout << "The number of children in the vicinity of the structure to be painted: " << numOfChildren << "\n";
	cout << "" "\n";

	cout << "Enter number of days available to complete the job: ";
	cin >> numOfDays;
	cout << "" "\n";

	cout << "The number of days expected to complete the job: " << numOfDays << "\n";
	cout << "" "\n";

	float answer = ((painters * numOfChildren * Area) + waste) * (1 + 1 / numOfDays);

	answer = answer + 1;

	numOfGallons = answer;

	cout << "The number of gallons of paint to buy: " << numOfGallons << "\n";
	cout << "" "\n";

	return 0;
}