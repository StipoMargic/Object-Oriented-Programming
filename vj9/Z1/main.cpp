#include <iostream>
#include "Sort.hpp"

int main()
{
	int arr[] = { 6, 2, 5, 3, 1, 667 };

	sort(arr, 6);

	for (int i = 0; i < 6; ++i)
	{
		std::cout << arr[i] << "\t";
	}

	char arr2[] = { 'a', 'F', 'g', 'b', 'z', 'n' };

	sort(arr2, 6);

	std::cout << "\n";
	for (int j = 0; j < 6; ++j)
	{
		std::cout << arr2[j] << "\t";
	}
}
