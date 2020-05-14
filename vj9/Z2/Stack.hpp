//
// Created by stipo on 14. 05. 2020..
//

#ifndef VJ9__STACK_HPP_
#define VJ9__STACK_HPP_

template<class T>
class Stack
{
 public:
	Stack(int size) : mSize(size), mCurrent(-1), mPtr(new T(size))
	{
	}

	void push(T value);
	T pop();
	bool isEmpty();
 private:
	int mSize;
	int mCurrent;
	T* mPtr;

};


#endif //VJ9__STACK_HPP_
