//#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

double celToFahr(double temp);
double cmToFeetInches(double cm, int &feet, double &inches);
double mphToKph(double mph);

int main()
{
	int option = 4;
	string dash = "--------------------------------------------", welcome = "Welcome to the unit conversion program",
		newc = "A new conversion";
	int temp = 0, feet = 0;
	double  inches = 0, mph = 0, cm = 0;
	char ch = 0;

	cout << dash << endl << setw((dash.length() - welcome.length()) / 2) << "" << welcome << endl << dash << endl;

	do {



		cout << "Options of available units conversion:\n" << "1. Convert temperature in Fahrenheit of Clesius\n"
			<< "2. Convert inches and feet to centimeters\n" << "3. Convert miles per hour to kilometers per hour\n"
			<< "0. Exit\n" << "choose an option: ";
		cin >> option;
		cout << endl << endl;

		switch (option) {
		case 1:

			cout << "Convert temperature in celsius to fahrenheit:\n" << dash << endl;
			cout << " Input the temperature in fahrenheit: ";
			cin >> temp;
			cout << " The temperature in fahrenheit: " << temp << endl;
			cout << " The temperature in celcius: " << celToFahr(temp) << endl;
			break;
		case 2:

			cout << "Convert centimeters to inches and feet:\n" << dash << endl;
			cout << " Input the centimeters: ";
			cin >> cm; 
			cmToFeetInches(cm,feet,inches);
			cout << " The result is " << feet << "feet and " << inches << " inches" << endl;
			break;

		case 3:

			cout << "Convert miles per hour to kilometers per hour\n" << dash << endl;
			cout << " Input the miles per hour: ";
			cin >> mph;
			cout << " The speed in mph: " << mph << endl;
			cout << " The speed in kph: " << mphToKph(mph) << endl;
			break;

		case 0:
			return 0;

		default:
			cout << "input is invalid";
		}

		cout << "\nwould you like to do another conversion?! (y: Yes, anything else: No): ";
		cin >> ch;

		if (ch == 'y') {
			cout << dash << endl << setw((dash.length() - newc.length()) / 2) << "" << newc << endl << dash << endl;
		}


	} while (ch == 'y');

}

double celToFahr(double temp) {
	temp = (temp - 32) * 5 / 9;
	return temp;
}

double cmToFeetInches(double cm, int &feet, double &inches) {
	inches = (cm / 2.54);
	while (inches >= 12) {
		inches -= 12;
		feet++;
	}
	return (cm = 0, feet, inches);
}

double mphToKph(double mph) {
	return 1.609348 * mph;
}