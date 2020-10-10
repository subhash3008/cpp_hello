/*
 * dynamic_names_sort.cpp
 *
 *  Created on: 09-Oct-2020
 *      Author: Subhash
 */

#include <iostream>


// MAIN IMPLEMENTATION
//std::size_t length { getNameCount() };
//auto* names {new std::string[length]{} };
//getNames(names, length);
//std::sort(names, names + length);
//printNames(names, length);
//delete[] names;

std::size_t getNameCount() {
	std::cout << "How many names would you like to enter? ";
	std::size_t length {};
	std::cin >> length;

	return length;
}

void getNames(std::string* names, std::size_t length) {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for(std::size_t i{ 0 }; i < length; ++i) {
		std::cout << "Enter name #" << i + 1 << ": ";
		std::getline(std::cin, names[i]);
	}
}

void printNames(std::string* names, std::size_t length) {
	std::cout << "Sorted Array => " << std::endl;
	for (std::size_t i { 0 }; i < length; ++i) {
		std::cout << "Name #" << i + 1 << ": " << names[i] << std::endl;
	}
}
