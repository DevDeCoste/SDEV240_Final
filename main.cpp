// Final main.cpp 
// This program allows a user to choose a type of calculation, then inputs their variables and the calculator will find the solution
// Dev DeCoste

#include <iostream>
#include <stdlib.h>
#include "compute.h"
#include "alerts.h"

using namespace std;

double choice;


alerts alert;

compute comp;

int main() {

	
	alert.displayMenu();

	cin >> choice;

	return 0;

}