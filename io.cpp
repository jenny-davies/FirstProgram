#include "io.h"
#include <iostream>

double readNumber()
{
	std::cout << "Enter a number: ";
	double x{};
	std::cin >> x;
	return x;
}

char readOperator()
{
	std::cout << "Enter the operator: ";
	char op{};
	std::cin >> op;
	return op;
}