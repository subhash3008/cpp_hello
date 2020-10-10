/*
 * calculator.cpp
 *
 *  Created on: 03-Oct-2020
 *      Author: Subhash
 */

#include <iostream>

double getDouble() {
	while (true) {
		std::cout << "Enter a double value : ";
		double x {};
		std::cin >> x;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops! That input is invalid. Please try again. \n";
		} else {
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}


char getOperator() {
	while (true) {
		std::cout << "Enter one of the following : +, -, * or / : ";
		char operation {};
		std::cin >> operation;

		switch(operation) {
			case '+':
			case '-':
			case '*':
			case '/': return operation;
			default:
				std::cout << "Oops! That input is invalid. Please try again. \n";
		}
	}
}


void printResult(double x, char operation, double y) {
	switch(operation) {
		case '+':
			std::cout << x << " + " << y << " is " << x + y << '\n';
			break;
		case '-':
			std::cout << x << " - " << y << " is " << x - y << '\n';
			break;
		case '*':
			std::cout << x << " * " << y << " is " << x * y << '\n';
			break;
		case '/':
			std::cout << x << " / " << y << " is " << x / y << '\n';
			break;
		default:
			std::cerr << "Something went wrong!! printResult() received an invalid operator.";
	}
}




