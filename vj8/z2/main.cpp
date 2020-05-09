#include <iostream>
#include "Conversion.hpp"

int main()
{
Conversion number(3);

std::cout << sizeof(number);

double numb = number;

	std::cout << sizeof(numb);
}
