// Hillel_HW_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Util.h"
#include "VectorUtil.h"

int main()
{

	std::vector<int> simpleVector = { 1, 2, 3, 4, 5, 3 };
	std::cout << "Vector hasn't duplicates: " << (hasNotDublicate(simpleVector) ? "Yes" : "No") << std::endl;
	std::cout << "Vector hasn't value: " << (hasNotValue(simpleVector, 1) ? "Yes" : "No") << std::endl;

	std::cout << "\n" << "**********" << "\n";

	std::vector<int> simpleVector2 = { 1, 2, 3, 4, 5};
	std::cout << "Vector hasn't duplicates: " << (hasNotDublicate(simpleVector2) ? "Yes" : "No") << std::endl;
	std::cout << "Vector hasn't value: " << (hasNotValue(simpleVector, 6) ? "Yes" : "No") << std::endl;

	std::cout << "\n" << "**********" << "\n";

	std::vector<std::string> simpleStringVector = { "one", "two", "three", "four", "five"};
	std::cout << "Vector hasn't duplicates: " << (vectorUtil::hasNotDublicate(simpleStringVector) ? "Yes" : "No") << std::endl;
	std::cout << "Vector hasn't value: " << (vectorUtil::hasNotValue(simpleStringVector, std::string("one")) ? "Yes" : "No") << std::endl;
	std::cout << "Vector hasn't value: " << (vectorUtil::hasNotValue(simpleStringVector, std::string("six")) ? "Yes" : "No") << std::endl;
}
