/*
 * file_name.cpp
 *
 *  Created on: 10-Oct-2020
 *      Author: Subhash
 */

#include <iostream>


std::string getName() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter the name to search in our database : ";
	std::string name;
	std::getline(std::cin, name);

	return name;
}

bool isNamePresent(std::string_view arr[], int length, std::string &search) {
	bool isPresent = false;
	for (int i {0}; i < length; ++i) {
		if (arr[i].compare(search) == 0) {
			isPresent = true;
		}
	}
	return isPresent;
}



