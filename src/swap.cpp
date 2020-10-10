/*
 * swap.cpp
 *
 *  Created on: 28-Sep-2020
 *      Author: Subhash Chandra
 */

#include <iostream>
#include "swap.h"

void swap(int smaller, int larger) {
	int temp = smaller;
	smaller = larger;
	larger = temp;

	std::cout << "Swapping the values\n";
	std::cout << "The smaller value is " << larger << '\n';
	std::cout << "The larger value is " << smaller << '\n';
}



