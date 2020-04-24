// Final main.cpp 
// This program allows a user to choose a type of calculation, then inputs their variables and the calculator will find the solution
// Dev DeCoste

#include <iostream>
#include <stdlib.h>
#include "compute.h"
#include "alerts.h"

using namespace std;

// Method Constructors
int getChoice(int, int);

// Variables
double choice;
double a, b;

//Class Objects
alerts alert;
compute comp;



int main() {

    bool repeat = true;

    do
    {

        alert.displayMenu();

        choice = getChoice(1, 6);

        if (choice == 1) {
            //Addition
            cout << "Please enter the first number to add: ";
            cin >> a;
            cout << "Please enter the second number to add: ";
            cin >> b;
            comp.add(a, b);
        }
        else if (choice == 2) {
            //Subtraction
            cout << "Please enter the first number to subtract: ";
            cin >> a;
            cout << "Please enter the second number to subtract: ";
            cin >> b;
            comp.subtract(a, b);
        }
        else if (choice == 3) {
            //Multiply
            cout << "Please enter the first number to multiply: ";
            cin >> a;
            cout << "Please enter the second number to multiply: ";
            cin >> b;
            comp.multiply(a, b);

        }
        else if (choice == 4) {
            //Divide
            cout << "Please enter the first number to divide: ";
            cin >> a;
            cout << "Please enter the second number to divide: ";
            cin >> b;
            if (b == 0) {
                cout << "You cannot divide by zero, please try again" << endl << "Please enter the second number to divide: ";
                cin >> b;
                comp.divide(a, b);
            }
            else {
                comp.divide(a, b);
            }

        }
        else if (choice == 5) {
            //Areas

        }
        else if (choice == 6) {
            exit(0);
        }
    } while (choice != 6);


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
