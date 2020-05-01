#include "alerts.h"
#include <iostream>
#include <stdlib.h>
#include <stdexcept> 

using namespace std;

	void alerts::displayMenu() {
		cout << "Welcome to the calculator!" << endl << "Please choose an operator: " << endl << "1. Addition" << endl
			<< "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << "5. Find Areas" << endl << "6. Exit" << endl
			<< "Choice: ";
	}

	void alerts::displayAreaMenu() {
		cout << "Program to calculate the area of objects " << endl << "1 -- Square" << endl
			<< "2 -- Circle" << endl << "3 -- Right Triangle" << endl << "4 -- Quit" << endl <<
			"Choice: ";
	}

