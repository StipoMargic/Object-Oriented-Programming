#include "Stack.hpp"
#include <iostream>

int main()
{
	Stack<int> stack(2);

	std::cout << stack.isEmpty() << std::endl;

	stack.push(1);
	stack.push(2);

	std::cout << stack.isEmpty() << std::endl;

	for (int j = 0; j < 2; ++j)
	{
		std::cout << stack.pop() << std::endl;
	}

	std::cout << stack.isEmpty() << std::endl;

	return 0;
}
