//
// Created by stipo on 14. 05. 2020..
//

#ifndef Z1__SORT_HPP_
#define Z1__SORT_HPP_
#include <algorithm>

template<class T>

void sort(T array[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (array[i] > array[j])
				std::swap(array[i], array[j]);
		}
	}
};

template<>
void sort(char array[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (tolower(array[i]) > tolower(array[j]))
				std::swap(array[i], array[j]);
		}
	}
}

#endif //Z1__SORT_HPP_
