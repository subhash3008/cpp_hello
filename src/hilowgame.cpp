/*
 * hilowgame.cpp
 *
 *  Created on: 03-Oct-2020
 *      Author: Subhash
 */

#include <iostream>

int getGuess(int count) {
	while (true) {
		std::cout << "Guess #" << count << " : ";
		int num {};
		std::cin >> num;

		if(std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops! That input is invalid. Please try again. \n";
		} else {
			std::cin.ignore(32767, '\n');
			return num;
		}
	}
}

bool playGame(int guesses, int answer) {
	for (int i { 1 }; i <= guesses; i++) {
		int guess { getGuess(i) };
		if (guess > answer) {
			std::cout << "Your answer is too high!\n";
		} else if (guess < answer) {
			std::cout << "Your answer is too low!\n";
		} else {
			return true;
		}
	}
	return false;
}

bool playAgain() {
	while (true) {
		std::cout << "Would you like to play again (y/n)?";
		char ch {};
		std::cin >> ch;
		switch(ch) {
			case 'y':
			case 'Y': return true;
			case 'n':
			case 'N': return false;
		}
	}
}


