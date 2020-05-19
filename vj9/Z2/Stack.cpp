//
// Created by stipo on 14. 05. 2020..
//

#include "Stack.hpp"
#include <iostream>

template<class T>
void Stack<T>::push(T value)
{
	if (mCurrent == (mSize - 1))
		std::cout << "No where to push" << std::endl;
	else
		mPtr[++mCurrent] = value;
}

template<class T>
T Stack<T>::pop()
{
	if(mCurrent == -1)
		std::cout << "Stack is empty" << std::endl;
	else
		return mPtr[mCurrent--];
}

template<class T>
bool Stack<T>::isEmpty()
{
	return mCurrent == -1;
}
