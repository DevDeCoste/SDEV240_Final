// Final main.cpp 
// This program allows a user to choose a type of calculation, then inputs their variables and the calculator will find the solution
// Dev DeCoste

#include <iostream>
#include <stdlib.h>
#include "compute.h"
#include "alerts.h"

using namespace std;


int getChoice(int, int);

double choice;


alerts alert;

compute comp;

double a, b;

int main() {

	//This is a test comment for git purposes
	//Another quick test
	alert.displayMenu();

    choice = getChoice(1, 5);

    if (choice == 1) {
        //Addition
        cout << "Please enter the first number to add: ";
        cin >> a;
        cout << "Please enter the second number to add: ";
        cin >> b;
        comp.add(a,b);
    }
    else if (choice == 2) {
        //Subtraction
        cout << "Please enter the first number to subtract: ";
        cin >> a;
        cout << "Please enter the second number to subtract: ";
        cin >> b;
        comp.subtract(a, b);
    }
    else if (choice == 4) {
        //Multiply

    }
    else if (choice == 5) {
        //Divide

    }
    else if (choice == 6) {
        //Areas

    }
    else if (choice == 7) {
        exit(0);
    }


	return 0;

}

/*****     getChoice     *****/
int getChoice(int num1, int num2)
{
    int input;

    // Get and validate the input
    cin >> input;
    while (input < num1 || input > num2)
    {
        cout << "Invalid input. Enter an integer between" << num1 << " and " << num2 << ": ";
        cin >> input;
    }
    return input;
}
