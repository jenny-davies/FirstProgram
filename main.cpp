#include "io.h"
#include <iostream>

int main()
{
	double x{ readNumber() };
	char op{ readOperator() };
	double y{ readNumber() };

	switch (op) {
	case '+':
		std::cout << x + y;
		break;
	case '-':
		std::cout << x - y;
		break;
	case 'x':
		std::cout << x * y;
		break;
	case '/':
		std::cout << x / y;
		break;
	}

	return 0;
}