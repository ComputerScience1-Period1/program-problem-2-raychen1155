/*
Ray Chen - 26 September 2017
Assignment Name : Take in Data
Display data, accept user response, display changed data
*/
// Libraries
#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int apple;
	float orange;
	double banana;
	bool peach;
	char mike;
	int calc_1, calc_2, calc_3, calc_4;

	cout << "How many apples do you eat per week? ";
	cin >> apple;
	cout << "How many mililiters of orange paint do you need to paint a small fence? ";
	cin >> orange;
	cout << "How many bananas are eaten per day in kilograms? ";
	cin >> banana;
	cout << "Do you like peach: Y/N ";
	cin >> mike;
	if (mike == 'Y' || mike == 'y') {
		peach = true;
	}

	cout << "\n";
	cout << "You eat " << apple << " apple(s) per week. \n";
	cout << "You need " << orange << " mililiters of orange paint for a small fence." << endl;
	cout << banana << " bananas are eaten per day in kilograms." << endl;
	cout << boolalpha << "Whether or not you like peach is evaluated as " << peach << "." << endl;
	cout << "\n";

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a another number : ";
	cin >> calc_2;
	cout << endl;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	cout << calc_1 << " - " << calc_2 << " = " << calc_1 - calc_2 << endl;
	cout << calc_1 << " * " << calc_2 << " = " << calc_1 * calc_2 << endl;
	cout << calc_1 << " / " << calc_2 << " = " << calc_1 / calc_2 << endl;
	
	pause();
}